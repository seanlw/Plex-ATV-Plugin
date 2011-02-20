/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import "BackRow-Structs.h"
#import "BRControl.h"

@class NSAttributedString, BRAsyncImageControl, BRMarqueeTextControl, BRWaitSpinnerControl, NSMutableSet, NSNumber, NSString;
@protocol BRDisplayInfoLoader;

@interface BRMenuItem : BRControl {
@private
	CGColorRef _bgColor;	// 40 = 0x28
	NSAttributedString *_text;	// 44 = 0x2c
	NSAttributedString *_detailedText;	// 48 = 0x30
	NSAttributedString *_rightJustifiedText;	// 52 = 0x34
	BRMarqueeTextControl *_scrollingTextControl;	// 56 = 0x38
	BRAsyncImageControl *_imageControl;	// 60 = 0x3c
	BRWaitSpinnerControl *_spinner;	// 64 = 0x40
	id<BRDisplayInfoLoader> _displayInfoLoader;	// 68 = 0x44
	NSMutableSet *_accessories;	// 72 = 0x48
	BOOL _dimmed;	// 76 = 0x4c
	BOOL _disableAccessoryHighlighting;	// 77 = 0x4d
	BOOL _forceOrdinalLayout;	// 78 = 0x4e
	BOOL _dotsTrailImage;	// 79 = 0x4f
	BOOL _forceBlueDotLayout;	// 80 = 0x50
	BOOL _forceMenuArrowLayout;	// 81 = 0x51
	BOOL _usingDefaultTextAttributes;	// 82 = 0x52
	BOOL _iconsTrailText;	// 83 = 0x53
	float _forcedHeight;	// 84 = 0x54
	float _forcedContentHeight;	// 88 = 0x58
	NSNumber *_ordinal;	// 92 = 0x5c
	int _largestOrdinal;	// 96 = 0x60
	float _imageInset;	// 100 = 0x64
	float _imageHeight;	// 104 = 0x68
	float _textPadding;	// 108 = 0x6c
	float _leftMargin;	// 112 = 0x70
	float _rightMargin;	// 116 = 0x74
	float _imageAspectRatio;	// 120 = 0x78
	BOOL _colorSet;	// 124 = 0x7c
	NSString *_accessibilityLanguage;	// 128 = 0x80
}
@property(retain) NSString *accessibilityLanguage;	// G=0x32e3c2b9; S=0x32e3d065; converted property
@property(retain) NSAttributedString *detailedText;	// G=0x32e3d925; S=0x32e3da49; converted property
@property(assign) BOOL dimmed;	// G=0x32e3c1d5; S=0x32e3e28d; converted property
@property(assign) BOOL disableAccessoryHighlighting;	// G=0x32e3c1e5; S=0x32e3d3b5; converted property
@property(retain) id displayInfoLoader;	// G=0x32e3c1c5; S=0x32e3d511; converted property
@property(assign) BOOL dotsTrailImage;	// G=0x32e3c245; S=0x32e3d1cd; converted property
@property(assign) BOOL forceBlueDotLayout;	// G=0x32e3c235; S=0x32e3d1f5; converted property
@property(assign) BOOL forceMenuArrowLayout;	// G=0x32e3c215; S=0x32e3d2bd; converted property
@property(readonly, assign) BOOL forceOrdinalLayout;	// G=0x32e3c225; converted property
@property(assign) float forcedContentHeight;	// G=0x32e3c205; S=0x32e3d2dd; converted property
@property(assign) float forcedHeight;	// G=0x32e3c1f5; S=0x32e3d301; converted property
@property(assign) BOOL iconsTrailText;	// G=0x32e3c255; S=0x32e3d1a5; converted property
@property(retain) id image;	// G=0x32e3d6d9; S=0x32e3d7a9; converted property
@property(assign) float imageAspectRatio;	// G=0x32e3c1b5; S=0x32e3d5b9; converted property
@property(assign) float imageHeight;	// G=0x32e3c295; S=0x32e3d0d5; converted property
@property(assign) float imageInset;	// G=0x32e3c275; S=0x32e3d13d; converted property
@property(retain) id imageProxy;	// G=0x32e3d5ed; S=0x32e3d60d; converted property
@property(assign) float leftMargin;	// G=0x32e3c265; S=0x32e3d171; converted property
@property(assign) CGColorRef menuItemBackgroundColor;	// G=0x32e3db81; S=0x32e3e269; converted property
@property(retain) NSAttributedString *rightJustifiedText;	// G=0x32e3d871; S=0x32e3d90d; converted property
@property(assign) float rightMargin;	// G=0x32e3c2a5; S=0x32e3d0a1; converted property
@property(retain) NSAttributedString *text;	// G=0x32e3da61; S=0x32e3db69; converted property
@property(assign) float textPadding;	// G=0x32e3c285; S=0x32e3d109; converted property
- (id)init;	// 0x32e3defd
- (id)_accessoryOfType:(int)type;	// 0x32e3d04d
- (id)_accessoryOfType:(int)type offset:(float *)offset;	// 0x32e3ccf9
- (id)_detailedTextAttributes;	// 0x32e3e1f9
- (void)_drawDimmedText:(id)text inRect:(CGRect)rect withDim:(float)dim context:(CGContextRef)context;	// 0x32e3e5b9
- (id)_firstAccessoryFromAccessories:(id)accessories offset:(float *)offset;	// 0x32e3cc85
- (id)_imageWithName:(id)name;	// 0x32e3e561
- (id)_largeLeftImage;	// 0x32e3ca55
- (float)_largestOrdinalWidth;	// 0x32e3e0a5
- (id)_ordinalImage;	// 0x32e3c9a1
- (id)_ordinalString;	// 0x32e3c5a5
- (id)_ordinalTypes;	// 0x32e3c9cd
- (id)_rightJustifiedIconWithRightOffset:(float *)rightOffset;	// 0x32e3cb51
- (id)_rightTextAttributes;	// 0x32e3e515
- (void)_setSpinnerEnabled:(BOOL)enabled;	// 0x32e3c6c5
- (CGSize)_sizeThatFits:(CGSize)fits;	// 0x32e3e7e9
- (void)_switchToScrollingTextForTextFrame:(CGRect)textFrame;	// 0x32e3c761
- (id)_textAttributes;	// 0x32e3e1b5
- (void)_updateColorAndContentHeight;	// 0x32e3e431
- (id)_upperRightImageTypes;	// 0x32e3c8e5
- (id)_upperRightImages;	// 0x32e3c83d
- (NSRange)accessibilityIndexRange;	// 0x32e3c2c9
- (id)accessibilityLabel;	// 0x32e3e725
// converted property getter: - (id)accessibilityLanguage;	// 0x32e3c2b9
- (id)accessibilitySecondaryLabel;	// 0x32e3e689
- (id)accessibilityTraits;	// 0x32e3c4fd
- (void)addAccessoryOfType:(int)type;	// 0x32e3d465
- (void)cancelLoadDisplayInfo;	// 0x32e3dc2d
- (id)centeredDetailedTextAttributes;	// 0x32e3e245
- (id)centeredTextAttributes;	// 0x32e3dba5
- (void)controlWasActivated;	// 0x32e3dd55
- (void)controlWasDeactivated;	// 0x32e3dcf5
- (void)controlWasFocused;	// 0x32e3de45
- (void)controlWasUnfocused;	// 0x32e3dded
- (void)dealloc;	// 0x32e3dfa9
- (id)description;	// 0x32e3de9d
// converted property getter: - (id)detailedText;	// 0x32e3d925
// converted property getter: - (BOOL)dimmed;	// 0x32e3c1d5
// converted property getter: - (BOOL)disableAccessoryHighlighting;	// 0x32e3c1e5
// converted property getter: - (id)displayInfoLoader;	// 0x32e3c1c5
// converted property getter: - (BOOL)dotsTrailImage;	// 0x32e3c245
- (void)drawInContext:(CGContextRef)context;	// 0x32e3e875
- (CGRect)focusCursorFrame;	// 0x32e3e399
// converted property getter: - (BOOL)forceBlueDotLayout;	// 0x32e3c235
// converted property getter: - (BOOL)forceMenuArrowLayout;	// 0x32e3c215
// converted property getter: - (BOOL)forceOrdinalLayout;	// 0x32e3c225
// converted property getter: - (float)forcedContentHeight;	// 0x32e3c205
// converted property getter: - (float)forcedHeight;	// 0x32e3c1f5
- (BOOL)hasAccessoryOfType:(int)type;	// 0x32e3d3d5
// converted property getter: - (BOOL)iconsTrailText;	// 0x32e3c255
// converted property getter: - (id)image;	// 0x32e3d6d9
// converted property getter: - (float)imageAspectRatio;	// 0x32e3c1b5
// converted property getter: - (float)imageHeight;	// 0x32e3c295
// converted property getter: - (float)imageInset;	// 0x32e3c275
// converted property getter: - (id)imageProxy;	// 0x32e3d5ed
- (BOOL)isAccessibilityElement;	// 0x32e3c2b5
// converted property getter: - (float)leftMargin;	// 0x32e3c265
- (void)loadDisplayInfo;	// 0x32e3dc69
// converted property getter: - (CGColorRef)menuItemBackgroundColor;	// 0x32e3db81
- (void)removeAccessoryOfType:(int)type;	// 0x32e3d3f1
// converted property getter: - (id)rightJustifiedText;	// 0x32e3d871
// converted property getter: - (float)rightMargin;	// 0x32e3c2a5
- (void)scrollingCompleted;	// 0x32e3dca5
// converted property setter: - (void)setAccessibilityLanguage:(id)language;	// 0x32e3d065
- (void)setDefaultImage:(id)image;	// 0x32e3d6f9
// converted property setter: - (void)setDetailedText:(id)text;	// 0x32e3da49
- (void)setDetailedText:(id)text withAttributes:(id)attributes;	// 0x32e3d945
// converted property setter: - (void)setDimmed:(BOOL)dimmed;	// 0x32e3e28d
// converted property setter: - (void)setDisableAccessoryHighlighting:(BOOL)highlighting;	// 0x32e3d3b5
// converted property setter: - (void)setDisplayInfoLoader:(id)loader;	// 0x32e3d511
// converted property setter: - (void)setDotsTrailImage:(BOOL)image;	// 0x32e3d1cd
// converted property setter: - (void)setForceBlueDotLayout:(BOOL)layout;	// 0x32e3d1f5
// converted property setter: - (void)setForceMenuArrowLayout:(BOOL)layout;	// 0x32e3d2bd
- (void)setForceOrdinalLayout:(BOOL)layout ordinal:(id)ordinal largestOrdinal:(id)ordinal3;	// 0x32e3d21d
// converted property setter: - (void)setForcedContentHeight:(float)height;	// 0x32e3d2dd
// converted property setter: - (void)setForcedHeight:(float)height;	// 0x32e3d301
// converted property setter: - (void)setIconsTrailText:(BOOL)text;	// 0x32e3d1a5
// converted property setter: - (void)setImage:(id)image;	// 0x32e3d7a9
// converted property setter: - (void)setImageAspectRatio:(float)ratio;	// 0x32e3d5b9
// converted property setter: - (void)setImageHeight:(float)height;	// 0x32e3d0d5
// converted property setter: - (void)setImageInset:(float)inset;	// 0x32e3d13d
// converted property setter: - (void)setImageProxy:(id)proxy;	// 0x32e3d60d
// converted property setter: - (void)setLeftMargin:(float)margin;	// 0x32e3d171
// converted property setter: - (void)setMenuItemBackgroundColor:(CGColorRef)color;	// 0x32e3e269
// converted property setter: - (void)setRightJustifiedText:(id)text;	// 0x32e3d90d
- (void)setRightJustifiedText:(id)text withAttributes:(id)attributes;	// 0x32e3d891
// converted property setter: - (void)setRightMargin:(float)margin;	// 0x32e3d0a1
// converted property setter: - (void)setText:(id)text;	// 0x32e3db69
- (void)setText:(id)text withAttributes:(id)attributes;	// 0x32e3da81
// converted property setter: - (void)setTextPadding:(float)padding;	// 0x32e3d109
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x32e3e165
// converted property getter: - (id)text;	// 0x32e3da61
// converted property getter: - (float)textPadding;	// 0x32e3c285
@end
