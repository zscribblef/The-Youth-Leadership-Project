package main

import "fmt"

//The Youth Leadership Project

//Our mission
func mission() {
	fmt.Println("Our mission is to provide a platform for young people to develop their leadership skills and succeed in life.")
}

//The activities
func activities() {
	fmt.Println("YLP runs activities and programs that include:")
	fmt.Println("-Mentoring and coaching")
	fmt.Println("-Tutoring in core subjects")
	fmt.Println("-Leadership workshops")
	fmt.Println("-Team building exercises")
	fmt.Println("-Community service projects")
}

//Who do we serve?
func serve() {
	fmt.Println("We serve young people aged 13-19 from the local community.")
}

//Our goal
func goal() {
	fmt.Println("Our goal is to help young people foster self-esteem, develop their talents, and create positive changes in their lives.")
}

//Donate
func donate() {
	fmt.Println("Donations are gratefully accepted to support our mission and programs.")
}

//Contact us
func contact() {
	fmt.Println("If you would like to get involved with the Youth Leadership Project, please don't hesitate to contact us at:")
	fmt.Println("youthLeadershipProject@example.com")
	fmt.Println("(123) 456-7890")
}

func main() {
	mission()
	activities()
	serve()
	goal()
	donate()
	contact()
}