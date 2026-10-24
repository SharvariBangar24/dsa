class Solution {
public:
    int countDaysTogether(string arriveAlice, string leaveAlice, string arriveBob, string leaveBob) 
    {
        //brutegforge
        // phele sare strings mese extract month ..so ek alag si if block me if its the odd months the n31 if even its 30 banao ..fir count total days individually then check if bobs ka start or end date lie in between the start and end date of alice ..jitne dinn smae unk count karke retrun karo 

        //string.substr(starting_index, number_of_characters)
                int days[] = {31, 28, 31, 30, 31, 30,
                      31, 31, 30, 31, 30, 31};

        int a1 = 0, a2 = 0, b1 = 0, b2 = 0;

        int m = stoi(arriveAlice.substr(0, 2));
        int d = stoi(arriveAlice.substr(3, 2));
        for (int i = 0; i < m - 1; i++)
            a1 += days[i];
        a1 += d;

        m = stoi(leaveAlice.substr(0, 2));
        d = stoi(leaveAlice.substr(3, 2));
        for (int i = 0; i < m - 1; i++)
            a2 += days[i];
        a2 += d;

        m = stoi(arriveBob.substr(0, 2));
        d = stoi(arriveBob.substr(3, 2));
        for (int i = 0; i < m - 1; i++)
            b1 += days[i];
        b1 += d;

        m = stoi(leaveBob.substr(0, 2));
        d = stoi(leaveBob.substr(3, 2));
        for (int i = 0; i < m - 1; i++)
            b2 += days[i];
        b2 += d;

        int start = max(a1, b1);
        int end = min(a2, b2);

        if (start > end)
            return 0;

        return end - start + 1;
        
    }
};

