//
//  MasterViewController.h
//  Lecture6
//
//  Created by Igor Tomych on 6/7/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "AppRecord.h"

@class DetailViewController;

@interface MasterViewController : UITableViewController

-(void)setRows:(NSArray *)rows;

@property (strong, nonatomic) DetailViewController *detailViewController;

@end
