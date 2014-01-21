//
//  ViewController.h
//  KNURE-Sked
//
//  Created by Влад on 10/24/13.
//  Copyright (c) 2013 Влад. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "REMenu.h"

@interface MainIPhoneController : UIViewController <UIScrollViewDelegate, UIActionSheetDelegate, UIGestureRecognizerDelegate> {
    IBOutlet UILabel *timer;
    IBOutlet UIScrollView *mainSkedView;
    IBOutlet UIView *skedCell;
    IBOutlet UIView *newSkedCell;
    IBOutlet UIView *timeLineView;
    IBOutlet UIView *timerLine;
}

@property (strong, readwrite, nonatomic) REMenu *menu;
@property (strong, nonatomic) UIButton *toggleBtn;
@property (strong, nonatomic) UIButton *menuBtn;

- (void)getLastUpdate;
- (id)initWithCoder:(NSCoder*)aDecoder;
- (IBAction)revealMenu:(id)sender;

@end

CGRect newRect;
NSMutableArray *deletedLessons;