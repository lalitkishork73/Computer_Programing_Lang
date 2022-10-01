let newsAccordion = document.getElementById("newsAccordion");
let source = 'the-times-of-india';
let apikey = "ad118a9f381cd157ee86bf42ad31677a";
const app = new XMLHttpRequest();
app.open("GET", `https://gnews.io/api/v4/search?q=top-headlines &token=${apikey}&lang=hi`, true);
app.onload = function () {
    if (this.status === 200) {
        let json = JSON.parse(this.responseText);
        let articles = json.articles;
        console.log(articles);
        let newsHTtml = "";
        articles.forEach((element, index) => {
            let news = `<div class="card">
                            <div class="card-header" id="heading${index}">
                                <h2 class="mb-0">
                                <button class="btn btn-link collapsed" type="button" data-toggle="collapse" data-target="#collapse${index}"
                                    aria-expanded="false" aria-controls="collapse${index}">
                                   <b>Breaking News ${index + 1}:</b> ${element["title"]}
                                </button>
                                </h2>
                            </div>

                            <div id="collapse${index}" class="collapse" aria-labelledby="heading${index}" data-parent="#newsAccordion">
                                <div class="card-body"> ${element["content"]}. <a href="${element['url']}" target="_blank" >Read more here</a>  </div>
                            </div>
                        </div>`;
            newsHTtml += news;
        });
        newsAccordion.innerText= "lalit";
    }
    else {
        console.log("Some error occured")
    }
}

app.send();
