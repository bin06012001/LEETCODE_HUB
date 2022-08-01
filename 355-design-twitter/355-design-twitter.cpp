class Twitter {
public:
    unordered_set<int> a={};
vector<unordered_set<int>> followers;
vector<pair<int,int>> news;
Twitter() {
    for(int i=0;i<10000;++i)
        followers.push_back({i});
}


void postTweet(int userId, int tweetId) {
    news.push_back(make_pair(userId,tweetId));
}

vector<int> getNewsFeed(int userId) {
    vector<int> res;
    int n=news.size();
    for(int i=n-1;(i>=0&&res.size()<10);--i)
        if(followers[userId].find(news[i].first)!=followers[userId].end())
            res.push_back(news[i].second);
    return res;
}


void follow(int followerId, int followeeId) {
    followers[followerId].insert(followeeId);
}


void unfollow(int followerId, int followeeId) {
    if(followerId!=followeeId)
    followers[followerId].erase(followeeId);
}
};

/**
 * Your Twitter object will be instantiated and called as such:
 * Twitter* obj = new Twitter();
 * obj->postTweet(userId,tweetId);
 * vector<int> param_2 = obj->getNewsFeed(userId);
 * obj->follow(followerId,followeeId);
 * obj->unfollow(followerId,followeeId);
 */