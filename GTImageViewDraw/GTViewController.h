//
//  GTViewController.h
//  GTImageViewDraw
//
//  Created by Gianluca Tursi on 25/03/14.
//  Copyright (c) 2014 Gianluca Tursi. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface GTViewController : UIViewController
@property (strong, nonatomic) IBOutlet UIImageView *myImage;
@property (strong, nonatomic) IBOutlet UILabel *lbl;
- (IBAction)start:(id)sender;
- (IBAction)stop:(id)sender;
- (IBAction)reset:(id)sender;
- (IBAction)save:(id)sender;
- (IBAction)blueColor:(id)sender;
- (IBAction)redColor:(id)sender;
- (IBAction)selectRubber:(id)sender;

- (IBAction)change:(id)sender;

@end
