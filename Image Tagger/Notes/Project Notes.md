# Friday, 6-19-26
I decided an image tagging program would be a cool first project since I like to take various in-game screenshots.

From program start to finish it should be able to:

1. Load images from a target folder
	1a. not including sub-folders
	1b. only specific image extensions (.jpg, .jpeg, .png, .webp)
2. have the capability select, edit, and display information about a selected image
	2a. is editing needed if i'm planning on having the program auto-rename files?
3. allow me to apply to 3 tags on said image
4. allow me to export a .JSON file mapping out applied tags
	4a. is this really needed? I don't plan on re-opening directories once tagged, I can manually add new files.
5. move images to folders based on applied tag order
	5a. Will it move or just copy the images requiring manual deletion of source images
	5b. What if I input tag order out of sequence?
	
with my Gemma 4 12B model, we went through the logic, those will added into a Conversation folder for the project repo.

my initial impressions of Gemma 4 12B are actually overall positive. I think only once or twice did I have to clarify myself in a multi-hour conversation.

my system prompt is:

```
You are a patient, ground-up programming mentor helping me learn logic and problem-solving in C++. Follow these rules:

Don't just fix or give answers — explain why something is wrong and walk through the reasoning step by step. Ask what I think before revealing your answer on logic questions.
Point out edge cases I might have missed.
Favor having me implement logic, algorithms, and data structures myself from first principles rather than reaching for pre-made libraries or frameworks that do the thinking for me — 
don't suggest a sorting library when the point is for me to build a sort myself, 
don't suggest a game/physics engine when I'm trying to understand a game loop from scratch. 
Basic language essentials (I/O, strings, standard containers when truly incidental) are fine — it's algorithmic and structural shortcuts I want to avoid, not the language itself.
When I share a project idea, a design, or my approach to something, proactively give suggestions and recommendations — 
point out design flaws, suggest better approaches, flag structural or scalability issues, and tell me what to consider next. 
Don't just wait to be asked; be opinionated and helpful.

If my logic or code is genuinely solid, say so clearly and explain why, rather than nitpicking for the sake of it.
```

it was written by Claude's sonnet 4.6 model with effort on low, and thinking on high.
going forward, if it needs modification I will do that myself for better documentation of the learning process.

inside my Image Tagger project I started on the basics before I went to bed. it's clear there is a lot of fundamentals I'm lacking in for programming.

For example, I might can fully think and design what I want, and I even understand the syntax of a language proficiently enough, but when it comes to actually writing the program I'm lost.
My first goal was to get file loading working through the CLI. The psuedo-code I wrote shows a disconnect on my thought vs program logic, as pointed out by Gemma 4.

so I modified my psuedo-code to be more inline, or so I thought of what I want the program to do, but I don't think I've gotten to that point yet.

Where I'm struggling is with documentation. Programs I've tried to learn programming through (Unity, Godot, Unreal, etc...) all have self-contained documentation that makes looking things up vastly easier.

For example, I need to use the std::filesystem provided in c++. So I #include <filesystem> inside my Image Tagger.cpp, and I'm struggling on figuring out how to actually use it.

I searched for C++ Docs but apparently? documentation for this language as a whole doesn't exist in the sense of how python docs are. This is where I ended my night.

# Saturday, 6-20-26

So, I've opened LM Studio, Visual Studio, my Solution, and realized something. The Solution is called "Hello GitHub" and it contains the project "Hello GitHub"
When setting up the solution I must have made a mistake, so I'll need to rename it. My first step is going to google if I can just right-click rename the solution inside visual studio.