//
//  GTViewController.m
//  GTImageViewDraw
//
//  Created by Gianluca Tursi on 25/03/14.
//  Copyright (c) 2014 Gianluca Tursi. All rights reserved.
//

#import "GTViewController.h"
#import "UIImageView+Draw.h"

@interface GTViewController ()

@end

@implementation GTViewController

- (void)viewDidLoad
{
    [super viewDidLoad];
    
    
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

- (IBAction)start:(id)sender {
   
    [self.myImage startDrawing];
    
}

- (IBAction)stop:(id)sender {
    
    [self.myImage stopDrawing];
}

- (IBAction)reset:(id)sender {
    
    [self.myImage resetImage];
}

- (IBAction)save:(id)sender {

    [self.myImage save];
    
}
- (IBAction)blueColor:(id)sender {
    
    [self.myImage setColor:[UIColor blueColor]];
    
}

- (IBAction)redColor:(id)sender {
    
    [self.myImage setColor:[UIColor redColor]];
    
}

- (IBAction)selectRubber:(id)sender {
    
    [self.myImage selectRubber];
    
}

- (IBAction)change:(id)sender {
    
    
    self.lbl.text = [NSString stringWithFormat:@"%.0f",  [(UISlider *)sender value]];
    [self.myImage setBrush:[(UISlider *)sender value]];
    
}
@end
