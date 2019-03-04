// Question 2: Write a javascript function that takes an array of numbers and a
// target number. The function should find two different numbers in the array
// that, when added together, give the target number. For
// example: answer([1,2,3], 4)should return [1,3]

const targetNum = (array,target) => {

  for(let i = 0; i < array.length; i++) {
    let num = array[i];
    for(let e = i+1; e < array.length; e++) {
      if(num + array[e] === target) {
        let answer = [num, array[e]];
        return answer;
      }
    }
  }
}

let array = [1,2,3,4,5,6,7,8,9];
let target = 11;

targetNum(array,target);
