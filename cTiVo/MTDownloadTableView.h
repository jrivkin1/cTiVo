//
//  MTDownloadList.h
//  myTivo
//
//  Created by Scott Buchanan on 12/8/12.
//  Copyright (c) 2012 Scott Buchanan. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import "MTTiVoManager.h"
#import "MTMainWindowController.h"
#import "MTDownloadTableCellView.h"
#import "MTDownloadCheckTableCell.h"
#import "MTProgressindicator.h"

@interface MTDownloadTableView : NSTableView <NSTableViewDataSource, NSTableViewDelegate, NSDraggingDestination, NSDraggingSource, MTTableViewProtocol> {
    IBOutlet MTMainWindowController *myController;
	IBOutlet NSButton *removeFromQueueButton;
    NSTableColumn *tiVoColumnHolder;
}

@property (nonatomic, strong) NSArray *sortedDownloads;


-(BOOL)playVideo;
-(BOOL)revealInFinder;
-(BOOL)selectionContainsCompletedShows;

- (IBAction)clearHistory:(id)sender;
@end
