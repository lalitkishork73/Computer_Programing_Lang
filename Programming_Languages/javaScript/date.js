  console.log('date and time');

/*   let today=new Date();
  console.log(typeof today);
  let otherdate=new Date('12-4-2003 04:54:08');
  console.log(otherdate);
  let a;
  a=otherdate.getDay();
  a=otherdate.getDate();
  a=otherdate.getMinutes();
  console.log('a'); */
 
  /* let divelem=document.createElement('nav');
  let text=document.createTextNode('this is the dormammu');
  divelem.appendChild(text);
  divelem.setAttribute('id','elem');
  divelem.setAttribute('style','border:2px solid green; width:154px; margin:34px padding:25px;');

  let container=document.querySelector('.navbar');
  let first=document.getElementsByClassName('list');

  container.insertAfter(divelem,first);
  divelem.appendChild(text);
  console.log(divelem,container,first); */


// Create a new element
let divElem = document.createElement('div');

// Add text to that created element
let val = localStorage.getItem('text');
let text;
if (val == null) {
  text = document.createTextNode('88');
}
else {
  text = document.createTextNode(val);
}
divElem.appendChild(text);

// Give element id, style and class
divElem.setAttribute('id', 'elem');
divElem.setAttribute('class', 'elem');
divElem.setAttribute('style', 'border:2px solid black; width: 450px; margin: 34px; padding:23px;');

// Grab the main container
let container = document.querySelector('.container');
let first = document.getElementById('myfirst');


// Insert the element before element with id first
container.insertBefore(divElem, first);

console.log(divElem, container, first)

// add event listener to the divElem
divElem.addEventListener('click', function () {
  let noTextAreas = document.getElementsByClassName('textarea').length;
  if (noTextAreas == 0) {
    let html = elem.innerHTML;
    divElem.innerHTML = ` <textarea class="textarea form-control" id="textarea" rows="3"> ${html}</textarea>`;
  }
  //listen for the blur event on textarea
  let textarea = document.getElementById('textarea');
  textarea.addEventListener('blur', function () {
    elem.innerHTML = textarea.value;
    localStorage.setItem('text', textarea.value);
  })
});

