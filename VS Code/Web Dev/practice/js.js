
// console.log("Hello World")
// console.log(2+6);
// console.log("hello",2,'world');

//Date in JavaScript:-
// let myDate = new Date();

//methods of Date:-
// console.log(myDate);
// console.log(myDate.getTime());
// console.log(myDate.getFullYear());
// console.log(myDate.getDay());
// console.log(myDate.getMinutes());
// console.log(myDate.getHours());

//adding class in an element using JavaScript :-
// document.getElementsByClassName('container')[0].classList.add("bg-primary")

//Accessing HTML code of any class element-
// let elemi=document.getElementsByClassName("container");
// console.log(elemi[0].innerHTML)

//Accessing Just Text from a class
// console.log(elemi[0].innerText);

//get element by tag name
// let tn= document.getElementsByTagName('div')
// console.log(tn);

// creating a child under a class
// createdElement=document.createElement('p')
// tn[0].appendChild(createdElement);
// createdElement.innerText="This is a created para";

//replacing child
// createdElement2=document.createElement('b')
// createdElement2.innerText="This is a created bold";
// tn[0].replaceChild(createdElement2 , createdElement);

//selecting using Query
// sel=document.querySelector('.container')
// console.log(sel)

// sel=document.querySelectorAll('.container')
// console.log(sel)

//Events in JavaScript
// function clicked(){
//     console.log('The Button was clicked');
// }
// window.onload=function(){
//     console.log('The window was loaded')
// }

// firstContainer.addEventListener('click',function(){
//     console.log("clicked on container");
// })
// firstContainer.addEventListener('mouseover',function(){
//     console.log("Mouse on container");
// })
    
//more elents listeners are :- mouseout , mouseup , mousedown ...etc.

//changing HTML content using event listener
// firstContainer.addEventListener('click',function(){
//     document.querySelectorAll(".container")[1].innerHTML="<b>we have clicked</b>"
//     console.log("clicked on container");
// })

//Arrow function

// function summ(a,b){
//     return a+b;
// }
//----Both up and down code are same 
// summ=(a,b)=>{
//     return a+b;
// }

//setTimeout and setinterval
// logkaro=()=>{
//     console.log('i am ur log')
// }
// setTimeout(logkaro,2000);
// setInterval(logkaro,2000)

// JavaScript localStorage
// localStorage.setItem('name','Shamoon')
// console.log(localStorage)
// console.log(localStorage.getItem('name'))

// JSON
//object to string
// obj={name:'Shamoon',height:180,a:{this:'that'}};
// let js=JSON.stringify(obj);
// console.log(js);

//converted string back to object
// parsed=JSON.parse(`{"name":"Shamoon","height":180,"a":{"this":"that"}}`);
// console.log(parsed);

