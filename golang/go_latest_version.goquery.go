package main

import (
	"fmt"

	"github.com/PuerkitoBio/goquery"
)

func main() {
	doc, err := goquery.NewDocument("https://golang.org/dl/")
	if err != nil {
		fmt.Print("url scarapping failed")
	}
	version, _ := doc.Find("div#toggleVisible").Attr("id")
	fmt.Println(version)
}
