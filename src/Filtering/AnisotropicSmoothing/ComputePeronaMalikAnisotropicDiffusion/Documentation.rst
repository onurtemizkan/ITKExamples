Perona Malik Anisotropic Diffusion On Grayscale Image
=====================================================

.. index::
   single: GradientAnisotropicDiffusionImageFilter
   single: smooth

Synopsis
--------

Perona Malik Anisotropic Diffusion for scalar valued images.


Results
-------

.. figure:: ComputePeronaMalikAnisotropicDiffusionComparison.png
  :scale: 50%
  :alt: Anisotropic diffusion comparison.

  Before anisotropic diffusion (left) and after anisotropic diffusion
  (right).



Code
----

C++
...

.. literalinclude:: Code.cxx
   :lines: 18-

Python
......

.. literalinclude:: Code.py
   :language: python
   :lines: 1, 18-


Classes demonstrated
--------------------

.. breathelink:: itk::GradientAnisotropicDiffusionImageFilter
