let string = "";
let buttons = document.querySelectorAll('.button');
let arr = Array.from(buttons);

logg=()=>{
    string="";
    document.querySelector('input').value=string;
}

arr.forEach((button) => {
    button.addEventListener('click', (e) => {
        if(e.target.innerHTML == '='){
            string = eval(string);
            document.querySelector('input').value = string;
        }
        else if(e.target.innerHTML == 'C'){
            string = "";
            document.querySelector('input').value = string;
        }
        else if(e.target.innerHTML == 'Del'){
            string=string.slice(0,-1);
            document.querySelector('input').value = string;
        }
        else if(e.target.innerHTML == ':-)'){
            string="! Thanks For Using My Calculator !"
            document.querySelector('input').value = string;
            setTimeout(logg , 1000);
        }
        else{
            string = string + e.target.innerHTML;
            document.querySelector('input').value = string;
        }
    })
})
