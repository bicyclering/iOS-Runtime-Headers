/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iPodUI.framework/iPodUI
 */

@class MPMediaItem, NSString;

@interface IUTrackInAlbumCellConfiguration : IUSongCellConfigurationAbstract {
    unsigned int _shouldStripCommonPrefixes : 1;
    NSString *_actionRowTitle;
    MPMediaItem *_albumRepresentativeTrack;
    NSString *_artist;
    double _duration;
    unsigned int _index;
    BOOL _isVideo;
    int _preset;
    NSString *_title;
}

@property(retain) NSString * actionRowTitle;
@property(retain) NSString * artist;
@property double duration;
@property unsigned int index;
@property BOOL isVideo;
@property int preset;
@property(retain) NSString * title;

+ (id)backgroundColorWithModifiers:(unsigned int)arg1;
+ (void)configureTableDisplaySettings:(id)arg1 dataSource:(id)arg2;
+ (id)customActionRowConfigurationWithSimpleCellConfiguration:(id)arg1;
+ (BOOL)drawsRowsInAlternateStyle;
+ (void)getRequiredStringProperties:(id)arg1 optionalStringProperties:(id)arg2 forDataSource:(id)arg3;
+ (Class)globalContextClass;
+ (float)rowHeightForGlobalContext:(id)arg1;

- (float)_indexColumnWidth;
- (void)_updateSubtitleText;
- (id)actionRowTitle;
- (id)artist;
- (id)backgroundColorWithModifiers:(unsigned int)arg1;
- (BOOL)canShowPurchasableMediaViews;
- (id)colorForLabelAtIndex:(unsigned int)arg1 withModifiers:(unsigned int)arg2;
- (void)configureForEntity:(id)arg1 query:(id)arg2 entityIndex:(unsigned int)arg3 entityCount:(unsigned int)arg4;
- (void)dealloc;
- (id)displayProperties;
- (struct CGPoint { float x1; float x2; })downloadButtonOrigin;
- (struct CGPoint { float x1; float x2; })downloadProgressIndicatorOrigin;
- (void)drawBackgroundWithModifiers:(unsigned int)arg1;
- (void)drawWithModifiers:(unsigned int)arg1;
- (BOOL)drawsDurationColumn;
- (double)duration;
- (id)fontForLabelAtIndex:(unsigned int)arg1;
- (BOOL)getShadowColor:(id*)arg1 offset:(struct CGSize { float x1; float x2; }*)arg2 forLabelAtIndex:(unsigned int)arg3 withModifiers:(unsigned int)arg4;
- (unsigned int)index;
- (id)init;
- (BOOL)isVideo;
- (void)layoutSubviewLayoutViews:(id)arg1;
- (int)preset;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })purchaseButtonFrame;
- (void)reloadData;
- (void)reloadImages;
- (void)reloadLayoutInformation;
- (void)reloadStringsWithProperties:(id)arg1;
- (void)setActionRowTitle:(id)arg1;
- (void)setArtist:(id)arg1;
- (void)setDuration:(double)arg1;
- (void)setIndex:(unsigned int)arg1;
- (void)setIsVideo:(BOOL)arg1;
- (void)setPreset:(int)arg1;
- (void)setTitle:(id)arg1;
- (id)subviewLayoutViewsWithModifiers:(unsigned int)arg1;
- (id)title;

@end