#include <stdio.h>

int main() {
    int teamStrengthA[11] = {0}, teamStrengthB[11] = {0};
    char teamNameA[31], teamNameB[31];
    char playerName[31], position;
    int strength;

    float calculateWeightedStrength(int strengths[]) {
        return (8 * strengths[0] + 10 * (strengths[1] + strengths[2]) + 5 * (strengths[3] + strengths[4]) + 8 * (strengths[5] + strengths[6]) + 11 * (strengths[7] + strengths[8]) + 12 * (strengths[9] + strengths[10])) / 100.0;
    }

    scanf(" %30[^\n]", teamNameA);
    for (int i = 0; i < 11; i++) {
        scanf(" %30[^;]; %c; %d", playerName, &position, &strength);

        int pos = (position == 'L') ? (teamStrengthA[1] == 0) ? 1 : 2 :
                  (position == 'Z') ? (teamStrengthA[3] == 0) ? 3 : 4 :
                  (position == 'V') ? (teamStrengthA[5] == 0) ? 5 : 6 :
                  (position == 'M') ? (teamStrengthA[7] == 0) ? 7 : 8 :
                  (position == 'A') ? (teamStrengthA[9] == 0) ? 9 : 10 : 0;

        if (teamStrengthA[pos] == 0)
            teamStrengthA[pos] = strength;
    }

    scanf(" %30[^\n]", teamNameB);
    for (int i = 0; i < 11; i++) {
        scanf(" %30[^;]; %c; %d", playerName, &position, &strength);

        int pos = (position == 'L') ? (teamStrengthB[1] == 0) ? 1 : 2 :
                  (position == 'Z') ? (teamStrengthB[3] == 0) ? 3 : 4 :
                  (position == 'V') ? (teamStrengthB[5] == 0) ? 5 : 6 :
                  (position == 'M') ? (teamStrengthB[7] == 0) ? 7 : 8 :
                  (position == 'A') ? (teamStrengthB[9] == 0) ? 9 : 10 : 0;

        if (teamStrengthB[pos] == 0)
            teamStrengthB[pos] = strength;
    }

    float strengthTeamA = calculateWeightedStrength(teamStrengthA);
    float strengthTeamB = calculateWeightedStrength(teamStrengthB);

    printf("%s: %.2f de forca\n%s: %.2f de forca\n", teamNameA, strengthTeamA, teamNameB, strengthTeamB);

    if (strengthTeamA > strengthTeamB)
        printf("%s eh mais forte\n", teamNameA);
    else if (strengthTeamB > strengthTeamA)
        printf("%s eh mais forte\n", teamNameB);
    else
        printf("Os times têm a mesma forca\n");

    return 0;
}

