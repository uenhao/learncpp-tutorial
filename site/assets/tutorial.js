/* LearnCpp 交互式教程 - 交互组件脚本 */
(function () {
  'use strict';
  var PAGE = document.body.getAttribute('data-page') || location.pathname;

  function store(k, v) { try { localStorage.setItem(k, v); } catch (e) {} }
  function read(k) { try { return localStorage.getItem(k); } catch (e) { return null; } }

  /* ---------- tiny C++ syntax highlighter ---------- */
  var CPP_KEYWORDS = ('alignas alignof and asm auto bool break case catch char char8_t char16_t char32_t ' +
    'class concept const consteval constexpr constinit const_cast continue co_await co_return co_yield ' +
    'decltype default delete do double dynamic_cast else enum explicit export extern false float for friend ' +
    'goto if inline int long mutable namespace new noexcept not nullptr operator or private protected public ' +
    'register reinterpret_cast requires return short signed sizeof static static_assert static_cast struct ' +
    'switch template this thread_local throw true try typedef typeid typename union unsigned using virtual ' +
    'void volatile wchar_t while std cout cin endl string size_t').split(' ');

  function esc(s) {
    return s.replace(/&/g, '&amp;').replace(/</g, '&lt;').replace(/>/g, '&gt;');
  }

  function highlight(code) {
    var re = /(\/\*[\s\S]*?\*\/)|(\/\/[^\n]*)|("(?:[^"\\\n]|\\.)*")|('(?:[^'\\\n]|\\.)*')|(^[ \t]*#[^\n]*)|(\b\d+(?:\.\d+)?[uUlLfF]*\b)|([A-Za-z_]\w*)/gm;
    var out = '';
    var last = 0;
    var m;
    while ((m = re.exec(code)) !== null) {
      out += esc(code.slice(last, m.index));
      var t = m[0];
      if (m[1] || m[2]) out += '<span class="tok-com">' + esc(t) + '</span>';
      else if (m[3] || m[4]) out += '<span class="tok-str">' + esc(t) + '</span>';
      else if (m[5]) out += '<span class="tok-pre">' + esc(t) + '</span>';
      else if (m[6]) out += '<span class="tok-num">' + esc(t) + '</span>';
      else {
        var w = m[7];
        if (CPP_KEYWORDS.indexOf(w) >= 0) out += '<span class="tok-kw">' + esc(w) + '</span>';
        else out += esc(w);
      }
      last = m.index + t.length;
    }
    out += esc(code.slice(last));
    return out;
  }

  Array.prototype.forEach.call(document.querySelectorAll('pre.code'), function (pre) {
    pre.innerHTML = highlight(pre.textContent);
  });

  /* ---------- multiple choice / true-false quizzes ---------- */
  var quizzes = Array.prototype.slice.call(document.querySelectorAll('.quiz'));
  quizzes.forEach(function (q) {
    var opts = q.querySelectorAll('button[data-k]');
    var fb = q.querySelector('.quiz-fb');
    Array.prototype.forEach.call(opts, function (btn) {
      btn.addEventListener('click', function () {
        if (q.classList.contains('solved')) return;
        if (btn.dataset.ok === '1') {
          q.classList.add('solved');
          Array.prototype.forEach.call(opts, function (b) {
            b.disabled = true;
            if (b.dataset.ok === '1') b.classList.add('correct');
          });
          fb.textContent = '✅ ' + (btn.getAttribute('data-why') || '回答正确！');
          fb.className = 'quiz-fb good';
          q.dataset.state = 'ok';
          updateProgress();
        } else {
          btn.classList.add('wrong');
          fb.textContent = '❌ ' + (btn.getAttribute('data-why') || '不对，再想一想。');
          fb.className = 'quiz-fb bad';
        }
      });
    });
  });

  /* ---------- predict-the-output ---------- */
  Array.prototype.forEach.call(document.querySelectorAll('.predict'), function (p) {
    var input = p.querySelector('input');
    var btn = p.querySelector('button.check');
    var fb = p.querySelector('.predict-fb');
    if (!input || !btn) return;
    var answers = (p.getAttribute('data-answer') || '').split('||').map(function (s) { return s.trim(); });
    function check() {
      var v = (input.value || '').trim();
      if (!v) return;
      var ok = answers.some(function (a) { return a.toLowerCase() === v.toLowerCase(); });
      if (ok) {
        p.classList.add('solved');
        fb.textContent = '✅ ' + (p.getAttribute('data-explain') || '正确！');
        fb.className = 'predict-fb good';
        input.disabled = true;
        btn.disabled = true;
        p.dataset.state = 'ok';
        updateProgress();
      } else {
        p.classList.add('tried');
        fb.textContent = '❌ ' + (p.getAttribute('data-hint') || '不对。只写程序打印出来的内容，不含引号。');
        fb.className = 'predict-fb bad';
      }
    }
    btn.addEventListener('click', check);
    input.addEventListener('keydown', function (e) { if (e.key === 'Enter') check(); });
  });

  /* ---------- per-lesson progress ---------- */
  function interactive() {
    return quizzes.concat(Array.prototype.slice.call(document.querySelectorAll('.predict')));
  }
  function updateProgress() {
    var items = interactive();
    var done = items.filter(function (el) { return el.dataset.state === 'ok'; }).length;
    var bar = document.querySelector('.lesson-progress');
    if (bar && items.length) {
      bar.textContent = '本节练习 ' + done + ' / ' + items.length;
    }
    if (items.length && done === items.length) {
      store('learncpp:done:' + PAGE, '1');
      var banner = document.querySelector('.done-banner');
      if (banner) banner.hidden = false;
    }
  }
  updateProgress();
  if (read('learncpp:done:' + PAGE) === '1') {
    var banner = document.querySelector('.done-banner');
    if (banner) banner.hidden = false;
  }

  /* ---------- index page: progress marks ---------- */
  Array.prototype.forEach.call(document.querySelectorAll('.lesson-list a[data-page]'), function (a) {
    var mark = a.querySelector('.mark');
    if (!mark) return;
    if (read('learncpp:done:' + a.getAttribute('data-page')) === '1') {
      mark.textContent = '✓ 完成';
    } else {
      mark.textContent = '未开始';
      mark.className = 'mark todo';
    }
  });
})();
