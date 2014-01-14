//
//  Movie.m
//  rotten
//
//  Created by Eric Hung on 1/14/14.
//  Copyright (c) 2014 Eric Hung. All rights reserved.
//

#import "Movie.h"

@implementation Movie

- (id) initWithDict:(NSDictionary *) dictionary {
    self = [super init];
    if (self) {
        self.title = [dictionary objectForKey:@"title"];
        self.synopsis = [dictionary objectForKey:@"synopsis"];
        self.casts = [dictionary objectForKey:@"abridged_cast"];
        NSDictionary *posters =  [dictionary objectForKey:@"posters"];
        self.posterUrl = [posters objectForKey:@"profile"];
    }
    return self;
}

@end
