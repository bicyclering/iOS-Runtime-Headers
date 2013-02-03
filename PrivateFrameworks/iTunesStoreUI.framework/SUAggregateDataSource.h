/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class NSMutableArray, NSArray;

@interface SUAggregateDataSource : SUTableDataSource {
    NSMutableArray *_headerViews;
    NSMutableArray *_sources;
    int _tableViewStyle;
}

@property(readonly) NSArray * sources;
@property int tableViewStyle;

- (int)_localIndexForSectionIndex:(int)arg1;
- (void)addDataSource:(id)arg1 withHeaderView:(id)arg2;
- (BOOL)canDeleteIndexPath:(id)arg1;
- (BOOL)canDoubleTapIndexPath:(id)arg1;
- (BOOL)canSelectIndexPath:(id)arg1;
- (id)cellForIndexPath:(id)arg1;
- (float)cellHeightForIndexPath:(id)arg1;
- (void)configureCell:(id)arg1 forIndexPath:(id)arg2;
- (id)dataSourceForIndexPath:(id)arg1;
- (void)dealloc;
- (BOOL)deleteIndexPath:(id)arg1;
- (id)headerViewForSection:(int)arg1;
- (id)indexPathForRowIndex:(unsigned int)arg1 inSectionIndex:(unsigned int)arg2;
- (int)numberOfColumnsInSection:(int)arg1;
- (int)numberOfRowsInSection:(int)arg1;
- (int)numberOfSections;
- (void)reloadCellContexts;
- (void)reloadData;
- (void)setCellReuseSource:(id)arg1;
- (void)setTableViewStyle:(int)arg1;
- (id)sources;
- (int)tableViewStyle;

@end