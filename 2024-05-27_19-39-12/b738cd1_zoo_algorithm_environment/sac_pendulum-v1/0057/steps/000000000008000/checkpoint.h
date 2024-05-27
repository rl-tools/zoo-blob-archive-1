// NOTE: This code export assumes that the endianness of the target platform is the same as the endianness of the source platform
#include <rl_tools/containers.h>
#include <rl_tools/nn/parameters/parameters.h>
// NOTE: This code export assumes that the endianness of the target platform is the same as the endianness of the source platform
#include <rl_tools/containers.h>
#include <rl_tools/nn/parameters/parameters.h>
#include <rl_tools/nn/layers/dense/layer.h>
#include <rl_tools/nn_models/sequential/model.h>
// NOTE: This code export assumes that the endianness of the target platform is the same as the endianness of the source platform
#include <rl_tools/containers.h>
#include <rl_tools/nn/parameters/parameters.h>
// NOTE: This code export assumes that the endianness of the target platform is the same as the endianness of the source platform
#include <rl_tools/containers.h>
#include <rl_tools/nn/parameters/parameters.h>
#include <rl_tools/nn/layers/dense/layer.h>
#include <rl_tools/nn_models/sequential/model.h>
// NOTE: This code export assumes that the endianness of the target platform is the same as the endianness of the source platform
#include <rl_tools/containers.h>
#include <rl_tools/nn/parameters/parameters.h>
// NOTE: This code export assumes that the endianness of the target platform is the same as the endianness of the source platform
#include <rl_tools/containers.h>
#include <rl_tools/nn/parameters/parameters.h>
#include <rl_tools/nn/layers/dense/layer.h>
#include <rl_tools/nn_models/sequential/model.h>
namespace rl_tools::checkpoint::actor {
    namespace layer_0 {
        namespace weights {
            namespace parameters_memory {
                static_assert(sizeof(unsigned char) == 1);
                alignas(float) const unsigned char memory[] = {36, 9, 11, 63, 120, 60, 33, 63, 126, 209, 47, 62, 249, 218, 119, 62, 154, 123, 18, 63, 64, 133, 77, 190, 190, 249, 153, 190, 51, 138, 162, 191, 213, 160, 149, 190, 51, 196, 179, 190, 208, 209, 55, 191, 190, 250, 147, 62, 241, 37, 152, 61, 104, 189, 190, 62, 37, 37, 9, 63, 200, 129, 0, 63, 93, 43, 151, 190, 189, 3, 14, 63, 107, 69, 87, 189, 184, 114, 53, 62, 94, 153, 11, 63, 61, 71, 231, 189, 175, 175, 188, 61, 51, 252, 166, 190, 22, 133, 183, 62, 207, 8, 22, 63, 91, 73, 243, 190, 252, 39, 77, 63, 114, 179, 5, 191, 255, 78, 154, 190, 103, 95, 101, 63, 43, 171, 117, 63, 116, 53, 150, 62, 130, 124, 239, 190, 100, 169, 183, 62, 225, 125, 85, 190, 176, 15, 221, 190, 40, 37, 67, 63, 84, 195, 48, 62, 163, 176, 23, 63, 72, 114, 165, 63, 119, 132, 111, 61, 206, 59, 14, 191, 185, 252, 180, 190, 48, 90, 205, 190, 249, 164, 144, 190, 16, 89, 168, 62, 62, 237, 143, 190, 240, 48, 243, 62, 235, 8, 175, 190, 30, 169, 137, 190, 243, 254, 152, 190, 72, 75, 118, 191, 25, 187, 0, 186, 208, 182, 23, 191, 152, 194, 194, 63, 11, 92, 12, 63, 188, 241, 195, 62, 136, 221, 58, 191, 206, 40, 85, 62, 167, 228, 42, 190, 89, 200, 58, 63, 118, 205, 228, 62, 33, 88, 58, 60, 220, 179, 222, 62, 41, 64, 6, 191, 147, 192, 134, 62, 57, 149, 71, 63, 108, 188, 111, 62, 31, 81, 21, 63, 209, 54, 102, 191, 84, 202, 224, 190, 167, 40, 94, 63, 244, 37, 112, 190, 208, 25, 155, 190, 44, 96, 37, 191, 105, 170, 42, 191, 24, 185, 93, 190, 24, 223, 29, 191, 63, 21, 53, 62, 140, 108, 239, 62, 122, 200, 25, 63, 144, 152, 19, 191, 63, 96, 198, 188, 32, 73, 179, 61, 96, 181, 137, 190, 188, 38, 248, 62, 254, 139, 142, 190, 188, 43, 157, 62, 9, 222, 179, 62, 73, 30, 69, 63, 198, 107, 92, 191, 107, 83, 210, 190, 39, 17, 173, 190, 6, 159, 204, 62, 15, 135, 21, 63};
                using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 32, 3, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
                using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
                const CONTAINER_TYPE container = {(float*)memory}; 
            }
            using PARAMETER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::parameters::Plain::spec<parameters_memory::CONTAINER_TYPE, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::parameters::groups::Input, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::parameters::categories::Weights>;
            const RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::parameters::Plain::instance<PARAMETER_SPEC> parameters = {parameters_memory::container};
        }
        namespace biases {
            namespace parameters_memory {
                static_assert(sizeof(unsigned char) == 1);
                alignas(float) const unsigned char memory[] = {139, 80, 53, 191, 17, 38, 217, 62, 245, 113, 17, 190, 232, 238, 37, 191, 239, 162, 182, 62, 69, 148, 172, 190, 103, 113, 6, 191, 38, 220, 78, 190, 152, 185, 218, 190, 119, 94, 129, 62, 206, 191, 160, 190, 88, 143, 140, 62, 75, 17, 36, 63, 194, 70, 24, 61, 5, 230, 161, 190, 244, 41, 20, 62, 64, 157, 13, 191, 49, 141, 5, 63, 49, 202, 206, 190, 81, 163, 100, 62, 141, 93, 16, 191, 86, 189, 184, 61, 240, 228, 209, 62, 250, 124, 253, 190, 140, 62, 229, 62, 180, 60, 12, 191, 219, 75, 238, 62, 245, 102, 39, 63, 242, 72, 244, 190, 12, 247, 177, 190, 75, 168, 16, 191, 219, 57, 231, 187};
                using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 32, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
                using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
                const CONTAINER_TYPE container = {(float*)memory}; 
            }
            using PARAMETER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::parameters::Plain::spec<parameters_memory::CONTAINER_TYPE, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::parameters::groups::Input, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::parameters::categories::Biases>;
            const RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::parameters::Plain::instance<PARAMETER_SPEC> parameters = {parameters_memory::container};
        }
    }
    namespace layer_0 {
        using SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::layers::dense::Specification<float, unsigned long, 3, 32, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::activation_functions::ActivationFunction::RELU, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::parameters::groups::Input, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamicTag, true, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>; 
        template <typename CAPABILITY>
        using TEMPLATE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::layers::dense::Layer<CAPABILITY, SPEC>;
        using CAPABILITY = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::layer_capability::Forward;
        using TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::layers::dense::Layer<CAPABILITY, SPEC>;
        const TYPE layer = {weights::parameters, biases::parameters};
    }
    namespace layer_1 {
        namespace weights {
            namespace parameters_memory {
                static_assert(sizeof(unsigned char) == 1);
                alignas(float) const unsigned char memory[] = {208, 49, 42, 189, 144, 201, 36, 190, 130, 224, 146, 62, 204, 27, 127, 62, 170, 168, 37, 190, 68, 23, 195, 188, 28, 112, 25, 189, 184, 192, 130, 61, 168, 251, 40, 190, 169, 240, 226, 189, 234, 131, 75, 191, 143, 78, 92, 189, 2, 4, 149, 189, 75, 248, 200, 190, 195, 189, 204, 189, 184, 234, 144, 190, 184, 0, 239, 189, 242, 169, 145, 62, 209, 2, 35, 190, 11, 199, 148, 62, 50, 115, 86, 190, 91, 84, 176, 61, 91, 184, 55, 190, 109, 94, 240, 188, 223, 146, 232, 60, 38, 159, 137, 189, 58, 140, 8, 62, 116, 218, 49, 62, 142, 182, 29, 62, 219, 9, 120, 190, 231, 75, 143, 60, 1, 87, 144, 189, 87, 15, 132, 61, 59, 65, 89, 62, 87, 181, 28, 62, 6, 209, 225, 190, 219, 198, 128, 61, 87, 129, 38, 62, 244, 22, 180, 62, 75, 43, 48, 60, 66, 149, 150, 189, 95, 190, 29, 190, 125, 197, 218, 62, 185, 220, 24, 62, 192, 72, 13, 189, 174, 205, 138, 62, 27, 159, 182, 62, 88, 215, 140, 62, 117, 33, 160, 190, 70, 222, 168, 61, 26, 129, 12, 191, 7, 0, 154, 190, 11, 246, 93, 62, 40, 135, 124, 190, 221, 104, 157, 61, 231, 1, 172, 190, 237, 26, 87, 189, 233, 146, 135, 62, 131, 83, 149, 189, 2, 151, 66, 62, 65, 78, 39, 62, 109, 132, 73, 191, 168, 162, 146, 190, 208, 232, 54, 190, 152, 170, 48, 63, 8, 237, 66, 190, 243, 15, 4, 190, 224, 20, 246, 60, 88, 38, 30, 61, 35, 61, 54, 62, 228, 202, 177, 61, 253, 223, 79, 190, 180, 230, 48, 62, 183, 91, 149, 61, 242, 90, 221, 62, 247, 172, 211, 190, 12, 15, 228, 189, 115, 144, 132, 62, 155, 212, 123, 190, 171, 150, 28, 189, 16, 146, 82, 62, 88, 107, 140, 190, 149, 195, 48, 190, 213, 227, 147, 189, 18, 108, 10, 188, 235, 129, 35, 62, 102, 198, 143, 61, 210, 51, 224, 190, 109, 239, 49, 61, 124, 12, 189, 188, 204, 98, 53, 190, 139, 16, 206, 61, 168, 205, 184, 61, 150, 255, 22, 189, 183, 177, 169, 190, 202, 172, 5, 188, 0, 46, 50, 191, 116, 241, 181, 189, 53, 196, 93, 190, 242, 217, 161, 62, 75, 56, 127, 62, 113, 63, 62, 190, 175, 81, 143, 190, 151, 19, 171, 61, 42, 40, 79, 62, 143, 140, 164, 62, 143, 212, 124, 191, 86, 140, 187, 61, 101, 72, 186, 190, 133, 64, 254, 190, 245, 121, 14, 191, 147, 186, 217, 189, 76, 238, 242, 61, 142, 45, 4, 189, 120, 1, 250, 61, 34, 177, 219, 62, 24, 47, 83, 190, 151, 92, 88, 62, 118, 156, 44, 190, 158, 6, 145, 61, 194, 40, 122, 62, 220, 138, 185, 190, 98, 222, 22, 62, 103, 189, 152, 61, 97, 19, 71, 189, 148, 24, 114, 189, 143, 200, 194, 62, 129, 50, 225, 61, 244, 118, 29, 190, 160, 211, 218, 187, 159, 252, 164, 61, 55, 236, 135, 189, 47, 181, 175, 59, 138, 218, 11, 189, 213, 128, 37, 189, 254, 176, 143, 61, 173, 224, 149, 60, 44, 175, 200, 189, 127, 172, 37, 62, 124, 152, 21, 61, 151, 111, 28, 61, 219, 59, 0, 190, 67, 154, 63, 188, 40, 142, 33, 190, 65, 123, 79, 188, 103, 154, 143, 187, 230, 112, 67, 189, 237, 239, 180, 189, 249, 103, 98, 61, 176, 76, 9, 190, 220, 255, 42, 190, 14, 24, 250, 189, 224, 83, 111, 60, 130, 112, 19, 62, 141, 175, 20, 190, 119, 204, 255, 61, 77, 117, 174, 189, 201, 225, 36, 190, 89, 148, 254, 189, 157, 144, 144, 189, 17, 255, 201, 60, 97, 82, 182, 61, 69, 103, 152, 60, 191, 187, 247, 61, 181, 154, 150, 189, 25, 56, 5, 189, 125, 226, 32, 189, 53, 164, 131, 188, 106, 220, 133, 61, 220, 97, 10, 62, 79, 5, 16, 191, 146, 101, 204, 188, 174, 40, 226, 190, 126, 149, 61, 190, 164, 62, 242, 187, 230, 79, 130, 61, 6, 131, 205, 189, 137, 223, 98, 60, 189, 28, 34, 190, 81, 50, 114, 62, 13, 24, 52, 190, 31, 142, 80, 61, 225, 51, 149, 190, 172, 233, 196, 184, 166, 59, 199, 189, 24, 203, 129, 61, 68, 85, 41, 189, 53, 95, 40, 61, 63, 59, 72, 62, 184, 23, 175, 189, 60, 33, 68, 62, 206, 171, 165, 61, 29, 14, 5, 63, 185, 229, 165, 190, 30, 45, 69, 62, 253, 180, 169, 190, 151, 72, 183, 189, 120, 73, 69, 62, 144, 153, 66, 62, 199, 211, 107, 189, 142, 24, 186, 189, 129, 10, 50, 189, 88, 115, 104, 62, 235, 47, 8, 190, 129, 176, 129, 190, 34, 116, 86, 62, 47, 213, 143, 190, 124, 252, 76, 58, 17, 33, 31, 190, 210, 29, 131, 62, 84, 92, 208, 60, 50, 198, 130, 62, 96, 0, 111, 61, 87, 41, 71, 189, 232, 103, 173, 189, 100, 233, 108, 62, 136, 65, 22, 189, 219, 137, 100, 190, 206, 229, 151, 190, 195, 209, 211, 60, 206, 152, 228, 61, 243, 247, 62, 61, 227, 217, 83, 62, 12, 45, 18, 190, 85, 2, 68, 191, 47, 156, 43, 62, 196, 176, 18, 190, 120, 130, 143, 58, 156, 134, 66, 62, 15, 200, 41, 190, 216, 22, 214, 189, 32, 107, 105, 190, 37, 176, 183, 60, 188, 94, 143, 62, 97, 191, 71, 191, 92, 209, 151, 190, 190, 227, 232, 59, 11, 14, 50, 190, 91, 85, 18, 191, 78, 139, 220, 190, 156, 198, 57, 190, 48, 34, 210, 188, 61, 234, 70, 62, 144, 100, 3, 62, 225, 223, 245, 188, 19, 180, 244, 188, 192, 23, 129, 61, 230, 24, 5, 62, 184, 176, 109, 62, 204, 66, 224, 190, 15, 53, 96, 62, 252, 89, 47, 62, 23, 76, 182, 189, 80, 198, 194, 189, 223, 95, 235, 60, 1, 134, 31, 61, 71, 68, 104, 189, 134, 133, 125, 62, 164, 51, 126, 190, 46, 83, 32, 62, 187, 75, 11, 189, 179, 186, 150, 61, 105, 143, 150, 60, 151, 243, 201, 189, 142, 89, 199, 189, 27, 145, 145, 189, 103, 168, 1, 191, 151, 216, 92, 189, 148, 50, 23, 189, 26, 115, 124, 190, 127, 23, 194, 61, 176, 127, 40, 62, 91, 18, 28, 62, 178, 171, 222, 61, 5, 150, 98, 190, 96, 144, 73, 188, 198, 44, 186, 190, 253, 127, 182, 61, 122, 124, 185, 189, 202, 196, 19, 190, 105, 12, 4, 189, 145, 31, 84, 62, 81, 223, 96, 61, 228, 126, 145, 62, 133, 233, 9, 62, 201, 8, 231, 60, 150, 140, 174, 189, 229, 149, 194, 61, 50, 255, 146, 62, 244, 116, 143, 188, 30, 62, 140, 60, 125, 255, 170, 190, 102, 247, 2, 189, 107, 42, 81, 61, 219, 217, 167, 60, 151, 38, 50, 190, 25, 106, 97, 190, 174, 89, 190, 190, 146, 107, 201, 62, 156, 56, 248, 61, 129, 164, 169, 62, 201, 5, 173, 61, 177, 29, 20, 62, 117, 222, 37, 62, 171, 195, 108, 190, 179, 21, 49, 189, 131, 181, 29, 190, 133, 230, 58, 189, 61, 142, 137, 189, 111, 235, 216, 61, 119, 32, 106, 62, 1, 175, 215, 189, 194, 178, 90, 190, 88, 21, 138, 61, 206, 126, 234, 189, 126, 102, 66, 188, 51, 79, 131, 61, 189, 20, 6, 190, 150, 226, 43, 190, 21, 192, 35, 191, 206, 194, 20, 191, 113, 68, 55, 190, 229, 255, 56, 191, 186, 137, 100, 60, 62, 246, 164, 189, 191, 173, 55, 190, 193, 37, 104, 190, 195, 201, 29, 189, 88, 43, 150, 62, 201, 130, 63, 62, 246, 248, 123, 191, 3, 48, 12, 190, 164, 38, 4, 62, 53, 21, 216, 190, 118, 12, 143, 191, 105, 191, 153, 60, 190, 20, 42, 190, 83, 220, 60, 62, 181, 49, 73, 62, 242, 62, 55, 62, 35, 148, 200, 189, 216, 94, 41, 62, 188, 160, 19, 61, 251, 49, 37, 62, 139, 145, 124, 61, 200, 3, 116, 191, 98, 100, 6, 62, 135, 17, 13, 189, 130, 34, 233, 189, 251, 17, 239, 61, 130, 176, 165, 61, 151, 190, 117, 62, 178, 121, 238, 190, 107, 58, 215, 62, 160, 67, 36, 191, 110, 27, 143, 61, 145, 160, 209, 61, 146, 209, 28, 189, 137, 60, 170, 189, 21, 142, 180, 62, 135, 4, 153, 189, 245, 39, 236, 190, 94, 18, 46, 191, 233, 58, 139, 61, 126, 140, 185, 62, 53, 60, 197, 188, 243, 119, 136, 191, 212, 201, 198, 189, 170, 83, 111, 190, 160, 156, 21, 190, 48, 47, 178, 61, 52, 147, 42, 190, 163, 162, 64, 190, 147, 239, 53, 62, 189, 231, 202, 61, 89, 131, 198, 190, 108, 246, 174, 190, 170, 200, 107, 191, 115, 75, 144, 62, 86, 123, 85, 191, 163, 229, 251, 189, 48, 80, 177, 189, 65, 228, 205, 189, 147, 46, 103, 62, 49, 16, 252, 190, 100, 210, 144, 189, 170, 101, 254, 190, 158, 204, 40, 62, 245, 126, 155, 189, 86, 25, 54, 61, 79, 38, 95, 61, 43, 55, 95, 190, 6, 85, 37, 190, 230, 35, 160, 62, 239, 11, 186, 190, 28, 107, 163, 190, 44, 248, 212, 189, 98, 102, 229, 61, 80, 3, 235, 190, 56, 7, 238, 190, 98, 100, 253, 190, 94, 209, 69, 62, 177, 99, 58, 188, 226, 188, 225, 61, 42, 181, 193, 61, 140, 231, 148, 190, 219, 255, 2, 62, 141, 241, 184, 189, 148, 175, 152, 62, 20, 114, 125, 190, 44, 11, 168, 61, 112, 250, 99, 62, 48, 217, 68, 190, 138, 105, 70, 190, 89, 200, 92, 190, 18, 14, 26, 189, 126, 193, 75, 191, 48, 230, 51, 62, 9, 52, 101, 189, 123, 67, 91, 62, 255, 50, 233, 61, 62, 185, 107, 61, 26, 50, 110, 190, 253, 40, 65, 62, 104, 198, 140, 62, 100, 221, 128, 62, 200, 46, 106, 191, 132, 166, 84, 190, 208, 244, 178, 190, 55, 243, 10, 191, 7, 192, 1, 191, 211, 165, 173, 190, 52, 159, 158, 62, 70, 148, 239, 60, 20, 245, 162, 61, 157, 187, 64, 61, 54, 139, 185, 189, 124, 116, 148, 61, 184, 122, 250, 188, 106, 199, 131, 62, 18, 250, 81, 62, 81, 248, 65, 190, 206, 232, 127, 62, 246, 5, 121, 62, 198, 254, 62, 190, 170, 107, 200, 61, 25, 252, 200, 62, 140, 84, 161, 60, 206, 99, 4, 191, 67, 90, 13, 62, 103, 222, 234, 188, 167, 131, 167, 189, 226, 211, 228, 59, 247, 14, 141, 190, 154, 173, 118, 190, 167, 66, 213, 60, 243, 152, 244, 60, 190, 164, 41, 62, 86, 235, 209, 61, 75, 149, 241, 61, 129, 174, 201, 189, 41, 158, 63, 187, 221, 159, 155, 190, 240, 139, 213, 189, 14, 193, 251, 60, 150, 38, 36, 62, 200, 253, 231, 190, 15, 181, 29, 62, 146, 251, 144, 61, 99, 223, 217, 187, 111, 149, 216, 189, 227, 87, 239, 189, 24, 67, 121, 62, 55, 251, 36, 60, 97, 50, 92, 190, 96, 184, 190, 61, 35, 53, 177, 190, 55, 1, 98, 190, 96, 214, 106, 61, 134, 1, 36, 190, 171, 146, 47, 189, 147, 134, 214, 61, 140, 73, 133, 61, 210, 186, 143, 189, 112, 225, 93, 61, 73, 45, 11, 190, 75, 163, 100, 188, 53, 17, 10, 190, 81, 72, 44, 62, 7, 169, 5, 189, 136, 82, 180, 189, 61, 60, 41, 190, 3, 77, 182, 189, 124, 253, 152, 189, 204, 215, 28, 190, 155, 191, 210, 60, 15, 152, 2, 62, 160, 71, 36, 190, 36, 185, 17, 190, 151, 58, 38, 190, 26, 62, 32, 190, 28, 248, 149, 189, 121, 201, 104, 189, 223, 186, 200, 189, 90, 164, 199, 189, 125, 108, 231, 61, 65, 231, 249, 59, 38, 24, 53, 190, 199, 102, 42, 189, 19, 129, 23, 62, 142, 37, 44, 189, 242, 195, 128, 60, 104, 227, 161, 189, 188, 132, 72, 190, 232, 5, 154, 61, 107, 47, 116, 190, 137, 230, 128, 190, 51, 57, 108, 189, 33, 249, 46, 190, 36, 148, 116, 190, 28, 172, 127, 190, 181, 236, 207, 189, 144, 107, 63, 190, 126, 62, 7, 62, 28, 206, 11, 62, 68, 70, 130, 190, 240, 131, 67, 60, 22, 247, 235, 190, 70, 149, 159, 61, 113, 24, 71, 62, 216, 43, 64, 191, 105, 15, 199, 190, 226, 201, 238, 189, 61, 172, 117, 190, 122, 221, 68, 190, 81, 162, 150, 190, 97, 239, 58, 190, 245, 234, 217, 61, 216, 16, 169, 62, 83, 77, 149, 190, 144, 224, 28, 191, 250, 103, 140, 191, 160, 93, 23, 189, 232, 174, 7, 189, 11, 143, 2, 190, 189, 91, 239, 59, 39, 22, 156, 190, 137, 208, 0, 191, 187, 43, 186, 61, 132, 220, 93, 189, 7, 21, 159, 189, 30, 176, 29, 190, 3, 223, 193, 190, 117, 83, 95, 61, 77, 22, 36, 60, 62, 84, 151, 62, 141, 176, 120, 62, 29, 95, 6, 189, 123, 231, 38, 191, 72, 186, 75, 189, 10, 174, 24, 189, 7, 93, 5, 191, 46, 97, 44, 61, 143, 31, 188, 190, 204, 77, 90, 62, 16, 242, 158, 190, 44, 224, 249, 61, 104, 157, 126, 190, 133, 223, 85, 190, 54, 232, 193, 190, 179, 250, 113, 189, 199, 27, 159, 190, 46, 187, 220, 189, 110, 125, 138, 190, 243, 27, 73, 190, 155, 44, 113, 61, 222, 82, 252, 190, 105, 22, 68, 62, 66, 76, 121, 61, 216, 0, 236, 190, 131, 219, 254, 189, 24, 42, 23, 62, 250, 216, 104, 190, 13, 4, 166, 60, 13, 234, 172, 190, 182, 163, 235, 189, 133, 8, 148, 62, 21, 91, 104, 62, 156, 197, 69, 62, 93, 64, 155, 62, 198, 226, 165, 62, 99, 31, 110, 62, 212, 101, 142, 190, 146, 175, 146, 61, 16, 224, 103, 191, 159, 106, 181, 189, 48, 26, 49, 189, 61, 21, 136, 189, 10, 103, 191, 189, 148, 247, 181, 190, 203, 72, 105, 189, 141, 255, 66, 62, 207, 29, 148, 189, 234, 125, 162, 61, 158, 90, 131, 190, 162, 41, 57, 191, 21, 207, 129, 190, 44, 180, 187, 190, 204, 63, 23, 189, 168, 10, 24, 190, 161, 175, 26, 190, 160, 237, 148, 61, 156, 249, 137, 189, 109, 169, 182, 189, 156, 43, 179, 188, 228, 4, 186, 61, 115, 245, 166, 60, 35, 28, 23, 62, 100, 224, 192, 189, 18, 235, 7, 62, 129, 68, 25, 61, 105, 231, 243, 189, 53, 190, 203, 189, 34, 170, 207, 189, 86, 82, 13, 190, 100, 96, 55, 61, 31, 14, 74, 61, 249, 89, 166, 188, 96, 88, 255, 189, 61, 134, 164, 187, 109, 165, 131, 189, 55, 110, 56, 61, 61, 155, 101, 189, 229, 205, 200, 189, 191, 77, 105, 189, 56, 155, 189, 60, 27, 131, 253, 189, 46, 214, 25, 190, 117, 34, 217, 189, 204, 92, 13, 61, 150, 159, 52, 61, 123, 19, 61, 189, 129, 252, 115, 62, 193, 219, 173, 190, 170, 245, 134, 190, 225, 13, 245, 189, 187, 50, 11, 190, 3, 249, 133, 61, 105, 137, 246, 61, 244, 81, 41, 190, 42, 205, 150, 60, 72, 191, 224, 61, 191, 103, 54, 189, 196, 167, 21, 190, 82, 160, 211, 60, 231, 98, 62, 190, 125, 44, 253, 189, 83, 106, 181, 62, 107, 82, 58, 191, 62, 123, 133, 190, 245, 139, 162, 189, 60, 109, 161, 189, 224, 149, 110, 190, 100, 23, 240, 187, 193, 38, 73, 190, 60, 141, 166, 62, 67, 227, 55, 62, 249, 66, 161, 190, 37, 194, 135, 189, 49, 101, 159, 190, 244, 92, 4, 190, 41, 95, 76, 190, 164, 113, 132, 190, 185, 200, 150, 189, 4, 180, 203, 60, 179, 47, 171, 190, 56, 187, 133, 61, 220, 43, 107, 190, 203, 235, 250, 60, 160, 64, 60, 190, 90, 187, 118, 61, 45, 117, 178, 61, 244, 198, 148, 62, 31, 108, 89, 62, 176, 199, 213, 62, 55, 181, 222, 61, 245, 3, 17, 62, 44, 160, 34, 62, 174, 155, 111, 190, 161, 137, 133, 62, 135, 145, 0, 190, 88, 132, 78, 190, 31, 99, 232, 188, 153, 200, 117, 188, 71, 115, 35, 189, 74, 52, 23, 60, 176, 238, 223, 61, 215, 51, 243, 61, 44, 244, 185, 61, 244, 85, 154, 61, 105, 165, 225, 60, 125, 2, 104, 190, 118, 233, 89, 60, 164, 135, 236, 189, 7, 201, 209, 190, 5, 128, 143, 62, 173, 72, 220, 187, 61, 244, 220, 189, 217, 3, 129, 62, 35, 138, 107, 62, 93, 214, 86, 189, 12, 110, 142, 189, 17, 212, 231, 189, 104, 135, 65, 60, 43, 121, 158, 62, 108, 37, 2, 62, 39, 197, 127, 62, 122, 102, 162, 62, 175, 138, 193, 62, 187, 227, 85, 61, 202, 15, 56, 190, 70, 178, 247, 61, 125, 116, 151, 186, 76, 143, 214, 61, 139, 132, 71, 61, 73, 21, 144, 188, 223, 20, 131, 62, 197, 199, 136, 190, 200, 6, 77, 61, 237, 98, 219, 61, 111, 145, 92, 62, 55, 187, 138, 62, 198, 216, 23, 62, 115, 113, 38, 62, 237, 214, 165, 189, 45, 209, 161, 61, 148, 110, 221, 189, 66, 64, 187, 187, 48, 122, 52, 190, 105, 149, 126, 60, 35, 2, 34, 189, 165, 58, 145, 61, 211, 213, 74, 190, 59, 237, 83, 187, 203, 19, 14, 189, 50, 66, 107, 189, 69, 151, 221, 61, 15, 239, 89, 61, 240, 44, 198, 188, 143, 206, 161, 189, 210, 118, 238, 189, 128, 29, 120, 189, 230, 225, 19, 62, 211, 228, 248, 59, 36, 62, 17, 189, 173, 137, 19, 190, 82, 215, 181, 189, 128, 80, 20, 62, 79, 170, 241, 189, 23, 17, 5, 189, 18, 183, 2, 190, 63, 247, 41, 62, 97, 238, 225, 61, 45, 139, 182, 189, 40, 44, 178, 61, 231, 109, 209, 189, 132, 155, 206, 189, 134, 227, 80, 61, 112, 158, 210, 61, 139, 3, 72, 62, 208, 217, 113, 190, 123, 209, 145, 190, 109, 147, 73, 57, 188, 33, 194, 62, 39, 190, 143, 61, 216, 1, 75, 189, 160, 232, 153, 61, 83, 245, 149, 190, 70, 167, 58, 63, 65, 82, 104, 62, 202, 41, 70, 62, 32, 58, 8, 63, 139, 208, 17, 62, 95, 253, 152, 62, 64, 80, 113, 190, 253, 180, 211, 61, 158, 163, 100, 191, 142, 50, 189, 186, 48, 34, 157, 61, 191, 90, 35, 190, 71, 38, 135, 189, 36, 250, 168, 190, 18, 186, 204, 61, 53, 129, 136, 61, 213, 169, 165, 189, 62, 8, 46, 190, 148, 90, 233, 61, 137, 103, 98, 191, 236, 15, 164, 190, 69, 6, 151, 190, 35, 138, 57, 191, 119, 69, 88, 62, 46, 226, 203, 190, 136, 201, 34, 62, 219, 230, 226, 61, 85, 11, 150, 190, 219, 198, 14, 190, 17, 100, 254, 189, 117, 104, 135, 190, 254, 128, 88, 58, 42, 179, 241, 190, 107, 0, 143, 190, 39, 87, 183, 62, 114, 188, 194, 189, 228, 107, 165, 191, 236, 239, 161, 190, 193, 165, 76, 190, 232, 225, 1, 60, 233, 152, 240, 188, 13, 139, 250, 61, 244, 99, 131, 190, 253, 112, 117, 62, 144, 214, 115, 62, 232, 126, 173, 189, 193, 118, 90, 189, 132, 160, 192, 191, 209, 33, 115, 61, 89, 194, 135, 189, 219, 33, 41, 190, 62, 121, 222, 61, 254, 74, 3, 188, 165, 89, 38, 62, 174, 26, 71, 62, 103, 68, 223, 189, 129, 82, 237, 61, 105, 24, 20, 190, 3, 155, 191, 61, 115, 176, 77, 62, 191, 184, 133, 189, 9, 210, 212, 189, 38, 146, 133, 190, 112, 26, 215, 61, 98, 80, 141, 60, 174, 9, 185, 189, 77, 213, 151, 190, 6, 247, 3, 62, 48, 20, 166, 189, 104, 233, 120, 190, 145, 24, 3, 190, 60, 6, 40, 62, 104, 146, 132, 190, 234, 8, 15, 62, 235, 211, 181, 190, 235, 197, 94, 61, 184, 150, 29, 189, 24, 22, 216, 61, 215, 111, 131, 62, 249, 42, 162, 185, 233, 247, 132, 60, 157, 81, 164, 62, 237, 220, 31, 62, 86, 52, 23, 191, 4, 99, 249, 188, 218, 197, 47, 189, 87, 145, 177, 189, 142, 72, 196, 61, 255, 169, 44, 189, 181, 96, 103, 60, 250, 217, 205, 188, 78, 139, 143, 189, 236, 59, 66, 189, 46, 91, 1, 188, 93, 79, 232, 189, 250, 113, 230, 189, 202, 107, 228, 60, 152, 126, 10, 190, 19, 143, 190, 189, 183, 21, 77, 190, 43, 3, 250, 187, 39, 133, 99, 189, 121, 245, 21, 62, 144, 255, 25, 190, 89, 185, 232, 189, 117, 206, 66, 190, 140, 202, 5, 62, 167, 97, 216, 189, 141, 210, 251, 61, 175, 11, 205, 61, 252, 199, 19, 62, 161, 113, 218, 61, 123, 77, 250, 61, 112, 100, 15, 190, 183, 175, 194, 189, 150, 78, 44, 61, 185, 177, 58, 189, 28, 164, 134, 61, 18, 181, 34, 190, 213, 232, 36, 190, 118, 110, 166, 61, 144, 67, 130, 62, 238, 212, 225, 61, 231, 209, 159, 189, 95, 143, 185, 189, 40, 206, 53, 62, 150, 35, 119, 59, 162, 231, 117, 62, 35, 51, 67, 191, 238, 21, 193, 190, 122, 84, 95, 190, 225, 69, 47, 191, 152, 211, 70, 189, 160, 141, 48, 190, 206, 198, 181, 62, 5, 1, 174, 188, 237, 197, 93, 59, 11, 172, 70, 62, 152, 226, 31, 190, 122, 215, 211, 189, 134, 166, 33, 191, 63, 94, 38, 62, 165, 176, 223, 61, 221, 135, 250, 189, 114, 64, 150, 189, 100, 174, 59, 188, 110, 61, 142, 189, 95, 112, 81, 62, 17, 202, 216, 62, 206, 96, 120, 188, 200, 192, 12, 190, 81, 134, 190, 187, 163, 48, 106, 60, 77, 174, 25, 190, 1, 82, 92, 62, 217, 82, 88, 62, 8, 137, 142, 62, 125, 132, 137, 190, 178, 27, 3, 191, 159, 161, 114, 189, 246, 255, 221, 62, 89, 220, 17, 62, 153, 209, 27, 188, 247, 92, 31, 62, 59, 212, 152, 189, 178, 141, 232, 188, 106, 155, 60, 191, 38, 247, 89, 190, 93, 188, 26, 188, 150, 177, 7, 62, 137, 142, 138, 62, 46, 215, 53, 191, 17, 18, 69, 62, 200, 144, 152, 190, 250, 46, 54, 190, 129, 148, 166, 186, 103, 213, 16, 62, 120, 131, 37, 62, 152, 165, 164, 61, 18, 67, 193, 189, 226, 9, 211, 189, 130, 82, 80, 62, 64, 147, 169, 188, 237, 63, 148, 62, 6, 132, 5, 62, 250, 218, 118, 190, 240, 21, 22, 189, 239, 114, 63, 190, 231, 225, 163, 190, 144, 244, 227, 189, 55, 147, 236, 61, 233, 168, 46, 190, 203, 200, 172, 61, 171, 194, 97, 61, 36, 184, 46, 61, 252, 213, 4, 62, 14, 148, 150, 62, 1, 154, 178, 62, 243, 19, 66, 62, 222, 92, 27, 190, 149, 73, 163, 187, 20, 98, 66, 191, 136, 200, 1, 62, 2, 88, 33, 62, 216, 204, 229, 62, 3, 123, 26, 190, 96, 192, 48, 190, 9, 52, 8, 62, 38, 246, 11, 188, 147, 58, 108, 190, 237, 254, 159, 190, 156, 140, 20, 62, 139, 204, 18, 62, 131, 124, 136, 190, 109, 60, 21, 62, 177, 224, 200, 59, 171, 144, 23, 62, 123, 201, 74, 61, 106, 114, 50, 190, 229, 32, 233, 188, 4, 227, 128, 61, 244, 42, 239, 189, 166, 220, 41, 190, 249, 222, 39, 62, 24, 242, 32, 61, 248, 123, 10, 189, 132, 81, 160, 189, 144, 189, 179, 189, 3, 119, 190, 188, 10, 56, 180, 189, 31, 202, 118, 189, 14, 99, 138, 189, 158, 158, 132, 189, 4, 158, 227, 189, 89, 77, 3, 190, 59, 90, 41, 190, 103, 58, 36, 61, 20, 40, 113, 185, 74, 255, 193, 60, 92, 5, 183, 189, 128, 55, 152, 189, 196, 74, 142, 189, 235, 162, 121, 61, 5, 70, 167, 61, 245, 226, 225, 189, 177, 184, 137, 189};
                using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 32, 32, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
                using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
                const CONTAINER_TYPE container = {(float*)memory}; 
            }
            using PARAMETER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::parameters::Plain::spec<parameters_memory::CONTAINER_TYPE, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::parameters::groups::Normal, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::parameters::categories::Weights>;
            const RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::parameters::Plain::instance<PARAMETER_SPEC> parameters = {parameters_memory::container};
        }
        namespace biases {
            namespace parameters_memory {
                static_assert(sizeof(unsigned char) == 1);
                alignas(float) const unsigned char memory[] = {111, 191, 84, 62, 252, 41, 95, 62, 25, 251, 20, 190, 53, 242, 219, 61, 112, 119, 14, 190, 134, 153, 247, 61, 27, 186, 170, 190, 170, 59, 154, 61, 186, 89, 226, 61, 68, 112, 69, 62, 153, 1, 251, 61, 52, 135, 228, 61, 3, 240, 114, 62, 46, 105, 14, 187, 178, 208, 255, 61, 107, 47, 13, 62, 113, 219, 169, 189, 170, 158, 41, 188, 49, 13, 137, 62, 172, 168, 6, 190, 114, 209, 30, 62, 92, 79, 179, 62, 58, 158, 181, 62, 51, 253, 229, 189, 155, 164, 37, 62, 141, 46, 148, 62, 83, 93, 180, 61, 142, 160, 184, 189, 84, 56, 152, 189, 174, 132, 7, 62, 30, 77, 36, 190, 236, 135, 195, 189};
                using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 32, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
                using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
                const CONTAINER_TYPE container = {(float*)memory}; 
            }
            using PARAMETER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::parameters::Plain::spec<parameters_memory::CONTAINER_TYPE, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::parameters::groups::Normal, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::parameters::categories::Biases>;
            const RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::parameters::Plain::instance<PARAMETER_SPEC> parameters = {parameters_memory::container};
        }
    }
    namespace layer_1 {
        using SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::layers::dense::Specification<float, unsigned long, 32, 32, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::activation_functions::ActivationFunction::RELU, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::parameters::groups::Normal, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamicTag, true, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>; 
        template <typename CAPABILITY>
        using TEMPLATE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::layers::dense::Layer<CAPABILITY, SPEC>;
        using CAPABILITY = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::layer_capability::Forward;
        using TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::layers::dense::Layer<CAPABILITY, SPEC>;
        const TYPE layer = {weights::parameters, biases::parameters};
    }
    namespace layer_2 {
        namespace weights {
            namespace parameters_memory {
                static_assert(sizeof(unsigned char) == 1);
                alignas(float) const unsigned char memory[] = {119, 163, 159, 62, 154, 192, 41, 191, 75, 236, 23, 62, 167, 125, 25, 63, 5, 66, 33, 61, 178, 139, 99, 61, 110, 56, 41, 62, 196, 192, 192, 62, 248, 55, 10, 62, 78, 229, 3, 63, 222, 156, 82, 63, 19, 47, 111, 63, 26, 75, 44, 62, 250, 109, 210, 62, 102, 123, 122, 189, 54, 203, 253, 189, 239, 126, 77, 191, 217, 153, 126, 190, 146, 29, 15, 191, 82, 96, 225, 189, 150, 155, 230, 190, 112, 189, 51, 190, 112, 229, 104, 190, 203, 205, 143, 189, 224, 171, 31, 191, 177, 97, 69, 63, 69, 157, 98, 62, 227, 117, 136, 189, 155, 213, 56, 191, 10, 34, 76, 190, 84, 135, 187, 62, 212, 96, 26, 189, 75, 104, 152, 62, 107, 243, 66, 189, 173, 143, 187, 62, 146, 52, 25, 189, 20, 229, 19, 190, 149, 246, 33, 62, 77, 121, 150, 62, 184, 159, 229, 189, 74, 22, 61, 189, 199, 3, 176, 61, 25, 248, 113, 62, 78, 199, 57, 62, 49, 182, 221, 190, 24, 107, 237, 60, 159, 234, 90, 190, 64, 133, 232, 189, 86, 111, 221, 61, 219, 39, 144, 188, 15, 60, 25, 188, 243, 97, 226, 187, 49, 18, 144, 60, 196, 222, 123, 190, 34, 35, 81, 190, 115, 32, 142, 188, 109, 60, 66, 62, 215, 211, 254, 187, 171, 69, 74, 190, 75, 151, 35, 62, 205, 192, 23, 62, 91, 219, 59, 188, 184, 148, 208, 60, 29, 164, 223, 188};
                using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 2, 32, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
                using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
                const CONTAINER_TYPE container = {(float*)memory}; 
            }
            using PARAMETER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::parameters::Plain::spec<parameters_memory::CONTAINER_TYPE, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::parameters::groups::Output, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::parameters::categories::Weights>;
            const RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::parameters::Plain::instance<PARAMETER_SPEC> parameters = {parameters_memory::container};
        }
        namespace biases {
            namespace parameters_memory {
                static_assert(sizeof(unsigned char) == 1);
                alignas(float) const unsigned char memory[] = {106, 7, 74, 61, 216, 165, 73, 190};
                using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 2, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
                using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
                const CONTAINER_TYPE container = {(float*)memory}; 
            }
            using PARAMETER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::parameters::Plain::spec<parameters_memory::CONTAINER_TYPE, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::parameters::groups::Output, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::parameters::categories::Biases>;
            const RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::parameters::Plain::instance<PARAMETER_SPEC> parameters = {parameters_memory::container};
        }
    }
    namespace layer_2 {
        using SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::layers::dense::Specification<float, unsigned long, 32, 2, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::activation_functions::ActivationFunction::IDENTITY, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::parameters::groups::Output, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamicTag, true, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>; 
        template <typename CAPABILITY>
        using TEMPLATE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::layers::dense::Layer<CAPABILITY, SPEC>;
        using CAPABILITY = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::layer_capability::Forward;
        using TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::layers::dense::Layer<CAPABILITY, SPEC>;
        const TYPE layer = {weights::parameters, biases::parameters};
    }
    namespace model_definition {
        using CAPABILITY = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::layer_capability::Forward; 
        using IF = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn_models::sequential::Interface<CAPABILITY>;
        using MODEL = IF::Module<layer_0::TEMPLATE, IF::Module<layer_1::TEMPLATE, IF::Module<layer_2::TEMPLATE>>>;
    }
    using MODEL = model_definition::MODEL;
    const MODEL model = {layer_0::layer, {layer_1::layer, {layer_2::layer, {}}}};
}
// NOTE: This code export assumes that the endianness of the target platform is the same as the endianness of the source platform
#include <rl_tools/containers.h>
namespace rl_tools::checkpoint::example::input {
    static_assert(sizeof(unsigned char) == 1);
    alignas(float) const unsigned char memory[] = {206, 106, 113, 63, 112, 243, 217, 60, 22, 223, 99, 190};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 3, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

// NOTE: This code export assumes that the endianness of the target platform is the same as the endianness of the source platform
#include <rl_tools/containers.h>
namespace rl_tools::checkpoint::example::output {
    static_assert(sizeof(unsigned char) == 1);
    alignas(float) const unsigned char memory[] = {168, 131, 71, 190, 139, 234, 198, 191};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 2, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

namespace rl_tools::checkpoint::meta{
   char name[] = "experiments/2024-05-27_19-39-12/b738cd1_zoo_algorithm_environment/sac_pendulum-v1/0057/steps/000000000008000";
   char commit_hash[] = "b738cd18dcbee2b66aa05c642653771cd0e46c8b";
}