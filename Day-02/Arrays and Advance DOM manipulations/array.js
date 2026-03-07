// ARRAY Practice

let arr = [1,2,3,4];

arr.push(5);   // add 5 at the end.
arr.pop();    // remove the last element.
arr.shift();    // remove the first element.
arr.unshift(7);   // add 7 in the starting.
let len = arr.length;    // returs the length of the array.

console.log(arr);

// sum of all elements 

let arr2 = [1,5,9,7,3,4];
let sum = 0;
for(let i of arr2){
    sum += i;
}
console.log(sum);

// reversing array without reverse function

let arr3 = [1,2,3,4,5,6,7];
let rev = [];
for(let i = arr3.length-1; i>=0; i--){
    rev.push(arr3[i]);
}

console.log(rev);