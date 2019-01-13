//
//  ViewController.m
//  CBKitDemo
//
//  Created by 陈 on 2019/1/13.
//  Copyright © 2019年 None. All rights reserved.
//

#import "ViewController.h"
#import <CBKit/CBKit.h>

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    CBStarRatingView *ratingView = [[CBStarRatingView alloc]initWithFrame:CGRectMake(20, 100, 200, 40)];
    ratingView.starColor = [UIColor redColor];
    ratingView.starPlaceHolderColor= [UIColor lightGrayColor];
    ratingView.starPlaceHolderBorderColor = [UIColor lightGrayColor];
    [self.view addSubview:ratingView];
}


@end
