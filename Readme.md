# 🚀 Piscine Codeloccol - Fiche C02
# 🧠 Thème : Premiers pas en langage C
# 🎯 Objectif pédagogique

Cette série d'exercices vise à initier les apprenants aux fondamentaux du langage C. À travers ces premiers programmes, vous découvrirez la structure d’un programme C, l’utilisation des entrées/sorties, les opérations arithmétiques, les conditions et les boucles.

# 🛠️ Compétences visées

- Comprendre la structure d’un programme en langage C

- Utiliser les types de données et opérateurs de base

- Lire et afficher des données utilisateur

- Manipuler les conditions avec if / else

- Répéter des instructions avec des boucles (for, while)

# 📁 Contenu des exercices
#	Nom du fichier	Description
- 1	hello_world_c.c	Affiche Hello, World! (Découverte de printf() et structure minimale d’un programme C)
- 2	sum_two_integers.c	Lit deux entiers en entrée, affiche leur somme (Utilisation de scanf() et des opérations arithmétiques)
- 3	even_or_odd.c	Vérifie si un entier est pair ou impair (if/else et opérateur %)
- 4	factorial.c	Calcule le factoriel d’un entier (for ou while)
- 5	swap_no_temp.c	Échange deux nombres sans variable temporaire (logique arithmétique)

# ✅ Instructions générales

# Utilisez le compilateur gcc pour compiler chaque fichier :


- gcc -o nom_executable nom_du_fichier.c
Exemple :

gcc -o hello hello_world_c.c

- Respectez les noms de fichiers indiqués pour chaque exercice.

- Chaque fichier doit contenir des commentaires clairs expliquant les étapes du programme.

- Les programmes doivent être testables et produire le résultat attendu depuis le terminal.

# 📦 Livrables attendus
- Un dépôt GitHub contenant tous les fichiers .c

# Chaque fichier doit être :

- Correctement nommé

- Compilable sans erreur

- Exécutable depuis la ligne de commande

- Commenté pour expliquer son fonctionnement

# 🔗 Exemple de dépôt GitHub (structure attendue)

Piscine-Codeloccol-C02/
├── hello_world_c.c
├── sum_two_integers.c
├── even_or_odd.c
├── factorial.c
└── swap_no_temp.c

# 🧪 Exemple d'exécution

$ ./hello
Hello, World!

$ ./sum
2 3
La somme est : 5

$ ./even_odd
4
4 est un nombre pair.

$ ./factorial
5
Le factoriel de 5 est : 120

$ ./swap
5 3
Après échange: a = 3, b = 5