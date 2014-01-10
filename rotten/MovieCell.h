//
//  MovieCell.h
//  rotten
//
//  Created by Eric Hung on 1/8/14.
//  Copyright (c) 2014 Eric Hung. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface MovieCell : UITableViewCell

@property (weak, nonatomic) IBOutlet UILabel *movieTitleLabel;
@property (weak, nonatomic) IBOutlet UILabel *movieDescriptionLabel;

@end
