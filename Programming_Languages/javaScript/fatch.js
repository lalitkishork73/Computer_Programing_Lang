let big = document.body.innerHTML;
big = ` <h1>Ajax tutorial</h1>
    <button type="button" id="fetchBtn" class="btn btn-primary">Fetch Data</button>
    <button type="button" id="popBtn" class="btn btn-secondary">Populate</button>

    <div class="container">
        <h1>Employee list</h1>
        <ul id="list">

        </ul>
    </div>
`
document.body.style.color = "rgba(115,15,115,0.9)";
console.log(big);
big;

function getData() {
    console.log("Started getData")
    url = "https://api.github.com/users";
    fetch(url).then((response) => {
        console.log("Inside first then")
        return response.json();
    }).then((data) => {
        console.log("Inside second then")
        console.log(data);
    })
}
getData();

function postData(){
    url = "http://dummy.restapiexample.com/api/v1/create";
    data = '{"name":"hagfg rglry347485945","salary":"123","age":"23"}'
    params = {
        method: 'post',
        headers: {
            'Content-Type': 'application/json'
        },
        body: data
    }
    fetch(url, params).then(response => response.json())
        .then(data => console.log(data)
        )
}
postData();