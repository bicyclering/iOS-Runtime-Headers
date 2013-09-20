/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/GameKit.framework/Frameworks/GameCenterUI.framework/GameCenterUI
 */

@class GKCollectionViewDataSource;

@interface GKSearchBar : UISearchBar {
    GKCollectionViewDataSource *_dataSource;
    int _sectionIndex;
}

@property(retain) GKCollectionViewDataSource * dataSource;
@property int sectionIndex;

- (id)dataSource;
- (void)dealloc;
- (int)sectionIndex;
- (void)setDataSource:(id)arg1;
- (void)setSectionIndex:(int)arg1;

@end