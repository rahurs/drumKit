// var houseKeeper1  = {
//     name : "rahul",
//     language : ["hindi","english","marathi"],
//     age : 26
// }
// console.log(houseKeeper1.name);
function HouseKeeper( name , age , language){ // constructor functions 
    this.name = name ;
    this.age = age;
    this.language = language;
}

var HouseKeeper1 = new HouseKeeper("rajaji",19 , ["hindi","hinglish","english"]);
console.log(HouseKeeper1.age);