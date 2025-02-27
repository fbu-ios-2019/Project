//
//  Routes.h
//  Decider
//
//  Created by mudi on 7/17/19.
//  Copyright © 2019 kchan23. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef void(^DeciderCompletionHandler)(NSData *data, NSURLResponse *response, NSError *error);

@interface Routes : NSObject

+ (NSURLSessionDataTask *)fetchRestaurantsOfCategory:(NSString *)category
                                        nearLocation:(NSString *)location
                                              offset:(int)offset
                                   completionHandler:(DeciderCompletionHandler)completionHandler;

+ (NSURLSessionDataTask *)fetchCategories:(void (^)(NSData *data, NSURLResponse *response, NSError *error))completionHandler;

+ (NSURLSessionDataTask *)fetchRestaurantDetails:(NSString *)yelpid completionHandler:(void (^)(NSData *data, NSURLResponse *response, NSError *error))completionHandler;

+ (NSURLSessionDataTask *)fetchLocations:(void (^)(NSData *data, NSURLResponse *response, NSError *error))completionHandler;

+ (NSURLSessionDataTask *)fetchRecommendations:(DeciderCompletionHandler)completionHandler;

+ (NSURLSessionDataTask *)fetchRecommendationsIn:(NSString *)location
                                      withUserId:(NSString *)userId
                                 withLikedPhotos:(NSArray *)likedPhotos
                                 withHatedPhotos:(NSArray *)hatedPhotos
                             withPricePreference:(NSInteger)pricePreference
                             withUserPreferences:(NSArray *)userPreferences
                               completionHandler:(DeciderCompletionHandler)completionHandler;

+ (NSURLSessionDataTask *)fetchSavedRestaurantsFromIds:(NSArray *)savedIds completionHandler:(DeciderCompletionHandler)completionHandler;

+ (NSURLSessionDataTask *)getHistoryofUser:(NSString*) userId completionHandler:(DeciderCompletionHandler)completionHandler;

+ (NSURLSessionDataTask *)likeRestaurantWithId:(NSString *)yelpId completionHandler:(DeciderCompletionHandler)completionHandler;

+ (NSURLSessionDataTask *)unlikeRestaurantWithId:(NSString *)yelpId completionHandler:(DeciderCompletionHandler)completionHandler;

+ (NSURLSessionDataTask *)hateRestaurantWithId:(NSString *)yelpId completionHandler:(DeciderCompletionHandler)completionHandler;

+ (NSURLSessionDataTask *)unhateRestaurantWithId:(NSString *)yelpId completionHandler:(DeciderCompletionHandler)completionHandler;

@end
