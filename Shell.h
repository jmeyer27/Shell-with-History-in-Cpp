// ============================================
// Name: 
// Assignment: 2 - UNIX Shell and History Feature
// Compiler: g++
// File type: Shell header file
// ============================================
#pragma once
#include <vector>
using namespace std;

const int MAX = 50;									// max length command


// Implementation of shell
class Shell {
public:
	bool isRunning;										// if program should run
	void parseline(char buffer[], char * args[]);		// parses the command into arguments.
	void execShellCommand(char * args[]);				// executes shell command.
	void execUserCommand(char * arg[]);					// executes user command.
	void saveCommand(char command[]);					// saves the command into a history list.
	bool isUserCommand(char * arg[]);					// checks if command is either user or shell command.
	Shell();											// default constructor.

private:
	 vector<string> history;					// command history list.
	bool ampersand;										// if command contains ampersand.
	void displayHistory();								// displays command history list.
};