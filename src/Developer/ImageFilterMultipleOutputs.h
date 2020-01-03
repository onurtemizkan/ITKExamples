#ifndef __itkImageFilterMultipleOutputs_h
#define __itkImageFilterMultipleOutputs_h

#include "itkImageToImageFilter.h"

namespace itk
{
template <class TImage>
class ImageFilterMultipleOutputs : public ImageToImageFilter<TImage, TImage>
{
public:
  /** Standard class type alias. */
  using Self = ImageFilterMultipleOutputs;
  using Superclass = ImageToImageFilter<TImage, TImage>;
  using Pointer = SmartPointer<Self>;

  /** Method for creation through the object factory. */
  itkNewMacro(Self);

  /** Run-time type information (and related methods). */
  itkTypeMacro(ImageFilterMultipleOutputs, ImageToImageFilter);

  TImage *
  GetOutput1();
  TImage *
  GetOutput2();

  /**  Create the Output */
  ProcessObject::DataObjectPointer
  MakeOutput(ProcessObject::DataObjectPointerArraySizeType idx) override;

  ProcessObject::DataObjectPointer
  MakeOutput(const ProcessObject::DataObjectIdentifierType &) override
  {
  return TImage::New().GetPointer();
  }


protected:
  ImageFilterMultipleOutputs();
  ~ImageFilterMultipleOutputs() override = default;

  /** Does the real work. */
  void
  GenerateData() override;


private:
  ImageFilterMultipleOutputs(const Self &) = delete; // purposely not implemented
  void
  operator=(const Self &) = delete; // purposely not implemented
};
} // namespace itk


#ifndef ITK_MANUAL_INSTANTIATION
#  include "ImageFilterMultipleOutputs.hxx"
#endif


#endif // __itkImageFilterMultipleOutputs_h
