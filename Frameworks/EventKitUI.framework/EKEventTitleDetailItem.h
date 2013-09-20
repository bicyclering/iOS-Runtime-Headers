/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@class NSObject<EKEventTitleDetailItemDelegate>, UIColor, UITableViewCell;

@interface EKEventTitleDetailItem : EKEventDetailItem <EKEventDetailTitleCellDelegate> {
    UITableViewCell *_cell;
    UIColor *_color;
    NSObject<EKEventTitleDetailItemDelegate> *_editDelegate;
    BOOL _showDot;
}

@property NSObject<EKEventTitleDetailItemDelegate> * editDelegate;

- (void).cxx_destruct;
- (id)cellForSubitemAtIndex:(unsigned int)arg1;
- (BOOL)configureWithCalendar:(id)arg1 preview:(BOOL)arg2;
- (float)defaultCellHeightForSubitemAtIndex:(unsigned int)arg1 forWidth:(float)arg2;
- (void)editButtonPressed;
- (id)editDelegate;
- (void)reset;
- (void)setEditDelegate:(id)arg1;
- (BOOL)shouldShowEditButtonInline;

@end