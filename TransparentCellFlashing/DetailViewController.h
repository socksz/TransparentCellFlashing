//
//  DetailViewController.h
//  TransparentCellFlashing
//
//  Created by Adriano Garavaglia on 12/8/13.
//  Copyright (c) 2013 Fred. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
