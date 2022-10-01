console.log('alax tutorial');

let fetchbtn = document.getElementById('fetchbtn');
fetchbtn.addEventListener('click', buttonClickHandler)

function buttonClickHandler() {
    console.log("yo've clicked th button");
    const app = new XMLHttpRequest();

    app.open('POST', 'http://dummy.restapiexample.com/api/v1/create', true);
    app.setRequestHeader('Content-type', 'application/x-www-form-urlencoded');

    app.onprogress = function () {
        console.log('on Progress');
    }
    app.onreadystatechange = function () {
        console.log('ready state is', app.readystate);

    }
    app.onload = function () {
        if (this.status === 200) {

            console.log(this.responseText);
        }
        else {
            console.error('some error');
        }
    }
    params = "name=test&salery=1000&age=25";
    app.send(params);
    console.log('we are done');
}

let popbtn = document.getElementById('popbtn');
popbtn.addEventListener('click', () => {
    console.log("yo've clicked th pophandler");
    const app = new XMLHttpRequest();

    app.open('GET', 'http://dummy.restapiexample.com/api/v1/employee/1', true)

    app.onprogress = function () {
        console.log('on Progress');
    }
    app.onreadystatechange = function () {
        console.log('ready state is', app.readystate);

    }
    app.onload = function () {
        if (this.status === 200) {

            let obj=JSON.parse(this.responseText);
            console.log(obj);
            let list=document.getElementById('list');
            str="";
            for( key in obj)
            {   
                str=`<li>${obj[key]}</li>`;
            }
            list.innerHTML=str;
            
        }
        else {
            console.error('some error');
        }
    }
    params = "name=test&salery=1000&age=25";
    app.send(params);
    console.log('we are done');
});

