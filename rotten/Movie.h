//
//  Movie.h
//  rotten
//
//  Created by Eric Hung on 1/14/14.
//  Copyright (c) 2014 Eric Hung. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Movie : NSObject
@property (nonatomic, strong) NSString *title;
@property (nonatomic, strong) NSString *synopsis;
@property (nonatomic, strong) NSString *posterUrl;
@property (nonatomic, strong) NSArray *casts;

- (id) initWithDict:(NSDictionary *) dictionary;
@end
