//
//  MasterViewController.h
//  TransparentCellFlashing
//
//  Created by Adriano Garavaglia on 12/8/13.
//  Copyright (c) 2013 Fred. All rights reserved.
//

#import <UIKit/UIKit.h>

#import <CoreData/CoreData.h>

@interface MasterViewController : UIViewController <NSFetchedResultsControllerDelegate>

@property (strong, nonatomic) NSFetchedResultsController *fetchedResultsController;
@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;

@end
