/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
 */

@class NSData, UIImage;

@interface PTSImageSettings : _UISettings <_UISettingsKeyObserver> {
    UIImage *_image;
    int _imageOrientation;
    float _imageScale;
    NSData *_pngData;
    BOOL _unarchiving;
}

@property(retain) UIImage * image;
@property int imageOrientation;
@property float imageScale;
@property(retain) NSData * pngData;

- (void).cxx_destruct;
- (void)_updateImageData;
- (void)_updateImageProperties;
- (void)applyArchiveValue:(id)arg1 forKey:(id)arg2;
- (id)archiveValueForKey:(id)arg1;
- (void)dealloc;
- (id)image;
- (int)imageOrientation;
- (float)imageScale;
- (id)init;
- (id)pngData;
- (void)setImage:(id)arg1;
- (void)setImageOrientation:(int)arg1;
- (void)setImageScale:(float)arg1;
- (void)setPngData:(id)arg1;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;

@end