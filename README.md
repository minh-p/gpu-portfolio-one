# GPU Portfolio One
This repository holds code and documentation for my own independent research studying GPU Computation.

This is the first portfolio and so I'm pretty lost on what are the things to do. I used an LLM as an curriculum maker, resources curator, and documentation editor.

## Project Style Guide and Language
I'll be using primarily using C++. There might be other languages like nix for setting up build environment or GLSL for simple shaders.

I'll be primarily using GoogleTest style guide.

| Component         | Convention | Example            |
|-------------------|------------|--------------------|
| GitHub repository | kebab-case | `gpu-computing`    |
| Directories       | kebab-case | `week-01-triangle` |
| C++ source files  | snake_case | `gpu_renderer.cc`  |
| C++ header files  | snake_case | `gpu_renderer.h`   |
| C++ types         | PascalCase | `GpuRenderer`      |
| CMake targets     | snake_case | `week_01_triangle` |

## Curriculum
Here's the AI-generated curriculum.

### Week 1: SDL3 GPU initialization
- Task: Render a triangle using SDL3's GPU API.
- Study: GPU devices, graphics pipelines, command buffers, shader compilation.
- Deliverable: Working executable and diagram of CPU-to-GPU command flow.
### Week 2: GPU resources
- Task: Render an interactive rotating cube with vertex/index buffers.
- Study: Buffer uploads, vertex attributes, transformation matrices, resource lifetime.
- Deliverable: Interactive renderer with documented resource ownership.
### Week 3: First compute kernel
- Task: Implement vector addition using an SDL3 compute shader.
- Study: Compute passes, workgroup sizes, thread indexing, storage buffers.
- Deliverable: Correct GPU output tested against C++.
### Week 4: GPU arithmetic laboratory
- Task: Implement vector scaling and elementwise multiplication.
- Study: Data parallelism, CPU/GPU transfers, throughput.
- Deliverable: Tests using different vector lengths, including irregular lengths.
### Week 5: Matrix multiplication
- Task: Implement naive matrix multiplication in C++ and on the GPU.
- Study: Linear algebra, indexing, floating-point error.
- Deliverable: Comparison tests and initial performance baseline.
### Week 6: Parallel reduction
- Task: Implement summation using partial reductions.
- Study: Synchronization, workgroup cooperation, parallel reduction trees.
- Deliverable: Correct results for non-power-of-two inputs.
### Week 7: Image convolution
- Task: Implement a grayscale filter and a basic convolution kernel.
- Study: 2D dispatch, neighborhoods, boundary handling.
- Deliverable: GPU image output compared against CPU reference.
### Week 8: Benchmarking infrastructure
- Task: Build a repeatable benchmark runner for completed kernels.
- Study: Warm-up, CPU/GPU timing, synchronization, statistical variation.
- Deliverable: Hardware metadata and machine-readable results.
### Week 9: Matrix tiling
- Task: Implement tiled matrix multiplication.
- Study: Workgroup-shared memory, barriers, data reuse.
- Deliverable: Naive/tiled comparison with correctness verification.
### Week 10: Convolution optimization
- Task: Implement separable Gaussian blur.
- Study: Algorithmic complexity, locality, arithmetic intensity.
- Deliverable: Comparison of direct and separable convolution.
### Week 11: GPU performance investigation
- Task: Investigate one kernel using profiling and controlled experiments.
- Study: Memory bandwidth, compute limits, dispatch overhead.
- Deliverable: Written report explaining a bottleneck and attempted optimizations.
### Week 12: Final project architecture
- Task: Design GPU particle simulation with CPU reference implementation.
- Study: State layout, numerical integration, simulation architecture.
- Deliverable: Design document, CPU implementation, test plan.
### Week 13: GPU simulation
- Task: Implement GPU particle updates.
- Study: Persistent buffers, data layout, compute dispatch.
- Deliverable: CPU and GPU state comparisons over multiple steps.
### Week 14: GPU rendering integration
- Task: Render the particles and add interactive controls.
- Study: Compute-to-render data dependencies, synchronization.
- Deliverable: Interactive GPU simulation application.
### Week 15: Performance scaling
- Task: Test particle counts, workgroup sizes, and data layouts.
- Study: Scaling analysis, bottleneck classification.
- Deliverable: Results table and performance analysis.
### Week 16: Portfolio publication
- Task: Polish tests, documentation, benchmarks, and project demonstration.
- Study: Reproducibility and technical communication.
- Deliverable: Public-ready repository and detailed engineering report.
