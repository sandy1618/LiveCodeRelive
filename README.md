# Twitter Data Analysis Blueprint
---------------------------------
### Hirarchy of Tweet Data 
---
Tweet - Also referred to as a ‘Status’ object, has many ‘root-level’ attributes, parent of other objects.
- User - Twitter Account level metadata. Will include any available account-level enrichments, such as Profile geo.
- Entities - Contains object arrays of #hashtags, @mentions, $symbols, URLs, and media.
- Extended Entities - Contains up to four native photos, or one video or animated GIF.
- Places - Parent to ‘coordinates’ object.
---
**Tweet Object Feature Table Selection**
[Reference : Twitter-Api => Twee Object](https://developer.twitter.com/en/docs/tweets/data-dictionary/overview/tweet-object)

 FeatureID | Type | Usage Description 
---------|-------|-----------------
created_at |Text.date  | Date text -> Date time, time stamp of the tweets
 entities.hashtags| Text |  
 entities.symbols |  | 
 entities.urls | Text.urls |
 favorite_count| Numeric | This is likes for tweet
 
*will complete later*
#### Structure
---
**Feature**<br>
Type And Type Converison
- Direct Use : How? 
    - As Input 
    - As Output 
- Derived Feature : 
    - As Input 
    - As ouptut
---

1. **created_at** 
   UTC time : The time is in seconds. 
    Resampling the time into bins of interval 5 mins, 1 hour, 4 hour , 1day etc and taking th count will give number of tweets per interval.
    [note] Deciding on the interval in key, can be done by view differet rates or can also be fed as a parameter and decide based on changing in parameter. 
    Deciding the time interval -> get the graph 
    Decide on -> 
    - Range of Threshold of ROT (rate of tweet),slope.  The range of rates of tweet after Nth interval for a particular tweet 
    
---   
[side branch] **Tweet cycle** 
Tweets can be part of Beginning of Trend , Propagation of Trend, or termination of trend. 
Identifying where the tweet is in the tweet cycle , can help us know if there would be an expected increase of a trend , saturation of trend or end of trend . 
*Todo: This requires further thinking* 
---





### Sample tweet Json file
```json
{
   "tweet_data": {
    "contributors": null,
    "coordinates": null,
    "created_at": "Sat, 04 Jan 2020 09:47:34 GMT",
    "display_text_range": [
      12,
      125
    ],
    "entities": {
      "hashtags": [
        {
          "indices": [
            105,
            109
          ],
          "text": "CAA"
        }
      ],
      "symbols": [],
      "urls": [],
      "user_mentions": [
        {
          "id": 445261401,
          "id_str": "445261401",
          "indices": [
            0,
            11
          ],
          "name": "Sandy Boy 🇮🇳(Sundeep)",
          "screen_name": "ssingapuri"
        }
      ]
    },
    "favorite_count": 0,
    "favorited": false,
    "full_text": "@ssingapuri One of the few people in the opposition I expected to remain at least neutral with regard to #CAA. Disappointing.",
    "geo": null,
    "id": 1213396542335287300,
    "id_str": "1213396542335287296",
    "in_reply_to_screen_name": "ssingapuri",
    "in_reply_to_status_id": 1213388730708283400,
    "in_reply_to_status_id_str": "1213388730708283392",
    "in_reply_to_user_id": 445261401,
    "in_reply_to_user_id_str": "445261401",
    "is_quote_status": false,
    "lang": "en",
    "metadata": {
      "iso_language_code": "en",
      "result_type": "recent"
    },
    "place": null,
    "retweet_count": 0,
    "retweeted": false,
    "source": "Twitter Web App",
    "truncated": false,
    "user": {
      "contributors_enabled": false,
      "created_at": "Sat Dec 28 05:37:12 +0000 2013",
      "default_profile": false,
      "default_profile_image": false,
      "description": "Subcutaneous Specialist, Fugu Eater, Rabbit Diviner",
      "entities": {
        "description": {
          "urls": []
        }
      },
      "favourites_count": 8653,
      "follow_request_sent": false,
      "followers_count": 755,
      "following": false,
      "friends_count": 222,
      "geo_enabled": true,
      "has_extended_profile": false,
      "id": 2265415398,
      "id_str": "2265415398",
      "is_translation_enabled": false,
      "is_translator": false,
      "lang": null,
      "listed_count": 41,
      "location": "Camelotpuri",
      "name": "Raymond Luxury Yacht",
      "notifications": false,
      "profile_background_color": "C0DEED",
      "profile_background_image_url": "http://abs.twimg.com/images/themes/theme1/bg.png",
      "profile_background_image_url_https": "https://abs.twimg.com/images/themes/theme1/bg.png",
      "profile_background_tile": true,
      "profile_banner_url": "https://pbs.twimg.com/profile_banners/2265415398/1390663055",
      "profile_image_url": "http://pbs.twimg.com/profile_images/427089538851172354/KpNEMufM_normal.png",
      "profile_image_url_https": "https://pbs.twimg.com/profile_images/427089538851172354/KpNEMufM_normal.png",
      "profile_link_color": "0084B4",
      "profile_sidebar_border_color": "FFFFFF",
      "profile_sidebar_fill_color": "DDEEF6",
      "profile_text_color": "333333",
      "profile_use_background_image": true,
      "protected": false,
      "screen_name": "Ray_luxuryyacht",
      "statuses_count": 43253,
      "time_zone": null,
      "translator_type": "none",
      "url": null,
      "utc_offset": null,
      "verified": false
    }
  }
}
```


-[ ] Tweets that have User Mentions are important because they usually mention the users that are influential . 



