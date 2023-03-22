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
//페이지 스크롤에 따른 요소 제어
const badgeEl = document.querySelector('header .badges');
const toTopEl = document.querySelector('#to-top');
// 페이지에 스크롤 이벤트를 추가!
window.addEventListener('scroll', function(){
  console.log(this.window.scrollY);
  if(this.window.screenY>500){
    //badges 요소 숨김!
    gsap.to(badgeEl,.6,{
      opacity: 0,
      display: 'none'
    });
  }else{
    gsap.to(badgeEl,.6,{
      opacity:1,
      display:'block'
    });
  }
});
//나타날 요소(.fade-in)들을 찾기
const fadeEls = document.querySelectorAll('.visual .fade-in');
//요소를 하나씩 반복처리
fadeEls.forEach(function(fadeEls,index){
  gsap.to(fadeEls,1,{
    delay: (index + 1) * .7,
    opacity : 1
  });
});
/*swiper api*/
new Swiper('.notice .swiper',{
  direction: 'vertical',//수직 슬라이드
  autoplay: true, //자동재생
  loop : true //반복 재생
});
new Swiper('.promotion .swiper',{
  autoplay:true,
  loop:true,
  slidesPerView:3,
  spaceBetween:10,
  centeredSlides: true
});

// 슬라이드 영역 요소 검색!
const promotionEl = document.querySelector('section.promotion');
// 슬라이드 영역를 토글하는 버튼 검색!
const promotionToggleBtn = document.querySelector('.toggle-promotion');

// 토글 버튼을 클릭하면,
promotionToggleBtn.addEventListener('click', function () {
  if (promotionEl.classList.contains('hide')) {
    promotionEl.classList.remove('hide');
  } else {
    promotionEl.classList.add('hide');
  }
});
gasp.to(',floating1',1.5,{
  delay:1,
  y:15,
  repeat: -1,
  yoyo: true,
  ease: Power1.easeInOut
});
gasp.to(',floating2',2,{
  delay:5,
  y:15,
  repeat: -1,
  yoyo: true,
  ease: Power1.easeInOut
});
gasp.to(',floating3',2.5,{
  delay:1.5,
  y:20,
  repeat: -1,
  yoyo: true,
  ease: Power1.easeInOut
});