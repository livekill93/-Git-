// 검색창요소.
const searchEl = document.querySelector('.search');
const searchInputEl = searchEl.querySelector('input');
//검색창 요소클릭시 실행
searchEl.addEventListener('click', function () {
    searchInputEl.focus();
  });
//검색창 요소 내부 실제 input요소에 포커스시 실행.
searchInputEl.addEventListener('focus', function () {
    searchEl.classList.add('focused');
    searchInputEl.setAttribute('placeholder', '통합검색');
  });
//검색창 요소 내부 실제 input요소에서 포커스해제시 실행.
searchInputEl.addEventListener('blur', function () {
    searchEl.classList.remove('focused');
    searchInputEl.setAttribute('placeholder', '');
  });