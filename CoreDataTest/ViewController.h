//
//  ViewController.h
//  CoreDataTest
//
//  Created by Marty Lavender on 6/10/15.
//  Copyright (c) 2015 Marty Lavender. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Item.h"


@interface ViewController : UIViewController <NSFetchedResultsControllerDelegate>

- (IBAction)addItem:(id)sender;
- (IBAction)findItem:(id)sender;

@property (strong, nonatomic) IBOutlet UITextField *itemTextField;
@property (strong, nonatomic) IBOutlet UILabel *itemStatus;
@property (strong, nonatomic) IBOutlet UIDatePicker *itemDate;

@property (strong, nonatomic) NSArray *itemnames;

@property (strong, nonatomic) IBOutlet UITableView *tableView;

@end

