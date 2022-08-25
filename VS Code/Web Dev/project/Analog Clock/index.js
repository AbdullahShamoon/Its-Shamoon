let d;
let ht;
let mt;
let st;
let hroatation;
let mroatation;
let sroatation;


setInterval(() => {
    d = new Date();
    ht = d.getHours();
    mt = d.getMinutes();
    st = d.getSeconds();
    hroatation = 30*ht +mt/2;
    mroatation = 6*mt + 0.1*st;
    sroatation = 6*st;

    hour.style.transform = `rotate(${hroatation}deg)`;
    minute.style.transform = `rotate(${mroatation}deg)`;
    second.style.transform = `rotate(${sroatation}deg)`;
}, 1000);