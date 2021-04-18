let zoo = new Map();

zoo.set('Zebra',5);
zoo.set('Gorilla',2);
zoo.set('Monkey',76);

let zebraCount = zoo.get('Zebra');

console.log(zebraCount);

for(let[key,value] of zoo){
    console.log(key+':'+value);
}