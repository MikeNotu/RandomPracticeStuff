//Write a program that prints the numbers from 1 to 100.
//But the multiples of three print "Fizz" instead of the number and for the multiples of five print "Buzz"
//For numbers which are multiples of both three and five print "FizzBuzz"

(function fizzBuzz(){
    for(let i=1;i<=100;i++){
        let str = i;
        if(i%3==0 && i%5==0){
        	str = 'FizzBuzz';
        } else if(i%3 ==0){
        	str ='Fizz';
        } else if(i%5 ==0){
        	str ='Buzz';
        }
        console.log(str);
    }
    })();

//Another Way if(i%15==0){
