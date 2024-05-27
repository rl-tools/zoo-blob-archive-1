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
                alignas(float) const unsigned char memory[] = {137, 37, 139, 62, 132, 77, 176, 190, 25, 195, 87, 60, 186, 150, 189, 62, 251, 110, 22, 63, 93, 229, 166, 190, 209, 186, 49, 63, 119, 98, 104, 63, 140, 80, 131, 62, 15, 83, 193, 190, 37, 176, 24, 63, 160, 102, 35, 191, 124, 126, 185, 190, 158, 166, 16, 63, 106, 99, 8, 190, 142, 82, 132, 62, 138, 126, 175, 190, 140, 45, 162, 187, 119, 26, 115, 63, 185, 105, 129, 59, 197, 167, 8, 62, 244, 161, 88, 188, 74, 219, 28, 63, 184, 6, 59, 190, 64, 59, 32, 63, 74, 95, 3, 60, 128, 175, 224, 62, 197, 176, 53, 190, 34, 125, 171, 191, 138, 189, 224, 190, 173, 169, 91, 190, 231, 226, 162, 191, 51, 246, 3, 190, 86, 12, 20, 63, 201, 56, 140, 63, 20, 24, 200, 62, 95, 91, 53, 63, 145, 122, 129, 191, 200, 93, 138, 190, 187, 200, 132, 63, 244, 215, 172, 63, 220, 222, 164, 62, 121, 100, 221, 190, 234, 42, 249, 191, 125, 66, 253, 190, 150, 183, 1, 191, 75, 39, 197, 61, 99, 251, 191, 190, 86, 20, 78, 62, 57, 64, 76, 190, 197, 219, 222, 190, 59, 243, 148, 190, 56, 76, 70, 191, 145, 117, 181, 62, 25, 152, 190, 62, 140, 41, 237, 190, 6, 226, 172, 62, 41, 191, 253, 62, 224, 70, 42, 63, 108, 84, 121, 62, 120, 208, 191, 189, 232, 48, 159, 62, 218, 109, 21, 63, 165, 209, 22, 63, 147, 68, 86, 191, 175, 231, 2, 191, 230, 218, 59, 63, 123, 64, 143, 191, 165, 188, 13, 191, 6, 16, 27, 60, 164, 20, 36, 191, 246, 139, 47, 189, 158, 142, 184, 190, 250, 245, 163, 63, 36, 171, 15, 62, 33, 15, 44, 63, 194, 1, 72, 191, 73, 249, 122, 190, 100, 42, 140, 62, 247, 134, 211, 62, 216, 55, 0, 191, 13, 195, 52, 63, 110, 114, 128, 190, 35, 50, 9, 63, 176, 163, 118, 191, 58, 74, 88, 189, 107, 34, 165, 187, 217, 227, 76, 62, 40, 168, 191, 63, 144, 197, 73, 61, 149, 230, 68, 190, 223, 40, 63, 63, 171, 171, 38, 63, 42, 227, 209, 190, 136, 59, 39, 63, 210, 44, 177, 61};
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
                alignas(float) const unsigned char memory[] = {232, 183, 19, 191, 240, 157, 249, 189, 140, 216, 19, 190, 52, 227, 128, 62, 241, 168, 198, 190, 52, 21, 11, 191, 57, 25, 219, 61, 109, 153, 4, 63, 2, 225, 175, 190, 57, 14, 149, 189, 225, 60, 17, 63, 72, 126, 81, 190, 162, 149, 13, 63, 192, 114, 174, 61, 39, 135, 194, 190, 29, 41, 79, 190, 110, 35, 46, 189, 171, 76, 167, 190, 140, 77, 25, 63, 16, 222, 254, 62, 232, 167, 133, 62, 122, 16, 251, 190, 37, 225, 128, 62, 243, 91, 173, 62, 72, 65, 48, 63, 84, 84, 165, 190, 174, 5, 169, 61, 101, 197, 239, 190, 136, 187, 55, 63, 31, 162, 219, 62, 190, 105, 173, 188, 149, 70, 217, 62};
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
                alignas(float) const unsigned char memory[] = {140, 158, 198, 188, 183, 252, 245, 61, 51, 24, 44, 188, 1, 194, 156, 189, 101, 16, 175, 188, 200, 243, 12, 62, 25, 6, 29, 62, 18, 50, 222, 61, 62, 190, 116, 189, 103, 53, 44, 190, 8, 133, 95, 189, 182, 233, 181, 189, 142, 141, 131, 189, 91, 166, 42, 190, 67, 219, 196, 189, 100, 145, 140, 189, 77, 192, 53, 61, 42, 40, 2, 190, 163, 31, 118, 189, 60, 168, 45, 190, 104, 85, 235, 60, 154, 116, 30, 61, 25, 237, 247, 59, 108, 56, 187, 187, 88, 138, 13, 190, 37, 78, 130, 188, 195, 16, 164, 60, 99, 243, 4, 61, 131, 152, 125, 189, 159, 154, 157, 189, 154, 252, 26, 62, 47, 5, 193, 61, 251, 121, 47, 190, 211, 20, 98, 191, 46, 19, 46, 191, 212, 87, 94, 189, 57, 61, 174, 61, 103, 50, 12, 190, 232, 83, 216, 190, 165, 249, 27, 190, 133, 117, 211, 188, 6, 77, 48, 191, 52, 224, 141, 188, 30, 198, 152, 189, 11, 67, 42, 63, 161, 81, 139, 190, 162, 20, 215, 191, 195, 106, 141, 189, 35, 18, 253, 189, 19, 220, 47, 190, 109, 215, 81, 62, 222, 124, 213, 189, 157, 217, 246, 59, 179, 229, 0, 190, 174, 146, 200, 61, 98, 192, 6, 62, 62, 177, 33, 62, 10, 124, 171, 62, 39, 112, 37, 191, 150, 125, 106, 61, 97, 147, 144, 62, 184, 245, 152, 190, 57, 250, 103, 61, 160, 71, 139, 61, 149, 237, 75, 61, 38, 225, 130, 190, 27, 54, 136, 61, 161, 188, 132, 61, 201, 244, 160, 189, 59, 159, 219, 61, 82, 60, 130, 190, 213, 254, 97, 188, 211, 106, 180, 189, 177, 19, 197, 60, 179, 149, 54, 189, 217, 233, 189, 189, 234, 214, 139, 189, 145, 110, 51, 61, 249, 86, 204, 61, 203, 123, 45, 61, 59, 64, 160, 189, 5, 83, 104, 61, 147, 250, 206, 189, 151, 161, 44, 190, 98, 161, 161, 60, 224, 44, 54, 59, 132, 7, 200, 189, 105, 42, 173, 61, 149, 207, 4, 189, 208, 15, 83, 61, 14, 182, 154, 61, 156, 42, 182, 60, 132, 11, 72, 189, 181, 255, 20, 189, 246, 229, 34, 189, 49, 13, 71, 190, 91, 212, 228, 189, 83, 73, 235, 62, 162, 254, 193, 190, 110, 82, 125, 188, 94, 245, 45, 62, 153, 7, 49, 190, 34, 51, 197, 189, 235, 7, 2, 62, 1, 93, 64, 61, 99, 54, 160, 189, 220, 206, 193, 61, 73, 244, 19, 189, 56, 83, 136, 62, 6, 133, 159, 61, 144, 232, 155, 61, 81, 143, 82, 190, 86, 238, 136, 61, 167, 65, 128, 189, 230, 179, 135, 62, 228, 179, 51, 61, 1, 42, 189, 61, 191, 60, 136, 188, 35, 250, 106, 188, 74, 181, 28, 61, 107, 238, 47, 62, 19, 196, 194, 61, 148, 91, 204, 61, 104, 135, 106, 190, 51, 248, 145, 61, 249, 53, 79, 62, 84, 92, 194, 189, 43, 171, 91, 189, 71, 120, 241, 61, 2, 141, 32, 190, 250, 131, 55, 60, 7, 23, 43, 62, 221, 189, 222, 58, 199, 219, 143, 61, 231, 218, 140, 62, 196, 50, 116, 62, 138, 146, 153, 62, 226, 133, 244, 61, 160, 200, 212, 59, 160, 183, 134, 190, 194, 112, 29, 62, 40, 99, 24, 62, 239, 186, 204, 61, 134, 189, 163, 62, 103, 107, 19, 190, 33, 237, 187, 190, 127, 38, 114, 189, 54, 142, 140, 62, 131, 254, 43, 190, 72, 180, 67, 189, 201, 124, 17, 189, 252, 253, 145, 62, 22, 228, 74, 189, 199, 240, 208, 190, 62, 18, 149, 188, 84, 140, 54, 62, 11, 153, 42, 189, 199, 133, 48, 62, 207, 140, 74, 190, 39, 124, 25, 61, 138, 244, 2, 189, 253, 241, 46, 62, 102, 19, 4, 62, 145, 151, 105, 190, 53, 192, 81, 190, 45, 199, 33, 61, 147, 114, 254, 190, 96, 60, 6, 190, 28, 85, 160, 190, 49, 117, 174, 190, 4, 98, 37, 61, 137, 3, 237, 189, 206, 97, 136, 191, 61, 72, 175, 189, 142, 221, 2, 191, 0, 55, 167, 189, 120, 220, 214, 190, 95, 19, 147, 61, 215, 99, 72, 62, 192, 137, 125, 189, 40, 248, 154, 62, 200, 255, 173, 190, 50, 203, 10, 191, 2, 190, 107, 62, 50, 143, 186, 62, 92, 24, 138, 189, 158, 2, 93, 190, 75, 184, 156, 190, 56, 254, 159, 62, 112, 43, 8, 62, 174, 57, 174, 62, 25, 221, 66, 62, 222, 73, 237, 189, 51, 145, 5, 191, 140, 17, 0, 191, 127, 129, 27, 62, 91, 171, 120, 62, 150, 106, 254, 189, 100, 98, 132, 190, 213, 104, 43, 62, 2, 104, 87, 61, 132, 47, 223, 191, 75, 126, 114, 62, 171, 50, 95, 190, 70, 28, 71, 62, 243, 217, 116, 190, 36, 224, 41, 192, 96, 93, 0, 60, 248, 64, 86, 62, 206, 125, 187, 58, 236, 27, 65, 190, 26, 192, 130, 188, 134, 76, 95, 62, 128, 34, 64, 190, 34, 32, 162, 190, 23, 210, 135, 61, 137, 130, 4, 63, 120, 113, 136, 62, 109, 224, 56, 191, 176, 75, 204, 189, 190, 238, 7, 63, 27, 231, 214, 61, 196, 247, 148, 188, 73, 128, 198, 62, 17, 78, 255, 61, 217, 229, 79, 62, 113, 196, 221, 190, 109, 73, 29, 190, 156, 239, 110, 62, 80, 160, 37, 190, 249, 156, 15, 190, 184, 196, 89, 189, 44, 86, 0, 62, 68, 202, 202, 189, 180, 120, 151, 62, 52, 67, 153, 190, 32, 33, 23, 62, 204, 11, 26, 190, 27, 50, 179, 188, 198, 102, 53, 190, 204, 8, 68, 61, 107, 49, 113, 189, 90, 92, 156, 62, 241, 20, 142, 190, 42, 132, 25, 62, 83, 29, 175, 189, 185, 211, 167, 189, 199, 54, 195, 61, 78, 114, 202, 190, 48, 83, 34, 62, 29, 39, 197, 187, 107, 186, 16, 62, 237, 201, 58, 60, 223, 154, 49, 190, 75, 56, 80, 190, 138, 214, 8, 189, 48, 187, 196, 189, 170, 116, 253, 61, 254, 224, 57, 191, 122, 199, 139, 189, 128, 112, 131, 61, 213, 9, 42, 190, 179, 186, 157, 189, 15, 85, 233, 61, 200, 214, 166, 190, 205, 37, 99, 189, 193, 165, 77, 190, 18, 77, 198, 190, 2, 216, 177, 60, 64, 43, 167, 190, 249, 52, 176, 190, 112, 77, 150, 189, 5, 107, 111, 61, 18, 88, 36, 189, 179, 150, 78, 62, 87, 43, 82, 190, 109, 194, 242, 61, 197, 120, 14, 63, 72, 153, 198, 62, 157, 21, 239, 189, 87, 104, 19, 190, 122, 49, 51, 63, 84, 80, 78, 61, 135, 192, 90, 190, 124, 171, 205, 190, 65, 25, 123, 189, 237, 144, 28, 62, 102, 55, 144, 190, 173, 54, 149, 189, 184, 109, 120, 61, 97, 221, 244, 190, 49, 209, 102, 61, 209, 171, 121, 191, 106, 227, 24, 62, 199, 223, 127, 62, 150, 228, 60, 188, 28, 120, 12, 60, 37, 226, 135, 190, 78, 109, 158, 62, 40, 181, 207, 190, 59, 166, 58, 62, 22, 131, 163, 61, 26, 102, 64, 189, 181, 104, 231, 190, 132, 200, 126, 188, 43, 190, 136, 62, 78, 95, 159, 62, 113, 252, 246, 61, 3, 30, 129, 190, 225, 132, 131, 61, 248, 19, 251, 61, 71, 33, 8, 62, 123, 97, 249, 190, 138, 187, 138, 62, 232, 28, 78, 62, 47, 122, 235, 189, 227, 222, 111, 61, 138, 55, 160, 190, 155, 9, 206, 190, 250, 227, 253, 189, 136, 32, 162, 189, 167, 0, 136, 190, 66, 49, 104, 62, 122, 113, 186, 62, 192, 45, 151, 190, 95, 166, 47, 190, 179, 133, 148, 62, 135, 118, 88, 62, 50, 4, 219, 62, 206, 92, 142, 189, 5, 239, 234, 189, 216, 3, 114, 189, 72, 196, 210, 61, 57, 98, 23, 62, 200, 108, 132, 189, 96, 119, 157, 62, 61, 216, 90, 190, 193, 163, 223, 61, 98, 221, 151, 60, 191, 226, 57, 62, 248, 76, 154, 190, 88, 86, 3, 191, 111, 62, 183, 190, 233, 60, 93, 190, 175, 243, 166, 61, 175, 207, 111, 191, 126, 87, 32, 62, 67, 49, 168, 62, 96, 183, 159, 189, 96, 200, 132, 62, 155, 40, 16, 190, 101, 149, 143, 62, 47, 136, 225, 189, 166, 67, 58, 190, 142, 140, 62, 62, 229, 161, 118, 61, 252, 14, 246, 189, 124, 201, 45, 62, 252, 163, 59, 190, 119, 11, 32, 61, 91, 74, 181, 188, 103, 42, 57, 62, 159, 167, 103, 61, 135, 3, 23, 59, 83, 120, 160, 190, 111, 5, 123, 62, 227, 155, 202, 62, 28, 201, 171, 62, 216, 149, 167, 58, 47, 100, 239, 61, 139, 140, 98, 190, 146, 149, 158, 190, 208, 42, 103, 190, 210, 230, 41, 190, 214, 227, 190, 188, 139, 161, 56, 61, 150, 117, 140, 190, 41, 238, 247, 190, 74, 189, 28, 62, 242, 108, 106, 62, 131, 37, 216, 62, 255, 73, 17, 191, 227, 174, 229, 189, 93, 198, 49, 190, 201, 204, 232, 189, 213, 229, 179, 62, 71, 212, 245, 190, 92, 133, 88, 190, 69, 65, 201, 61, 34, 252, 27, 189, 107, 141, 38, 190, 140, 126, 79, 189, 231, 160, 21, 190, 35, 57, 139, 189, 0, 27, 87, 190, 84, 52, 136, 190, 124, 164, 151, 61, 4, 64, 196, 189, 173, 63, 62, 190, 131, 29, 35, 190, 241, 132, 120, 62, 24, 70, 6, 189, 198, 199, 235, 61, 87, 26, 90, 190, 225, 157, 130, 62, 206, 71, 188, 62, 126, 57, 131, 62, 103, 172, 109, 189, 142, 156, 53, 190, 53, 133, 217, 62, 31, 223, 18, 190, 45, 85, 225, 190, 74, 91, 42, 188, 196, 122, 10, 61, 13, 22, 4, 189, 157, 104, 64, 189, 121, 98, 98, 188, 60, 253, 173, 190, 58, 217, 79, 191, 182, 125, 170, 190, 35, 255, 171, 190, 236, 32, 198, 188, 255, 0, 114, 62, 206, 175, 3, 191, 93, 5, 18, 61, 174, 26, 86, 62, 56, 120, 87, 62, 82, 25, 65, 191, 9, 104, 133, 62, 18, 76, 99, 190, 98, 202, 9, 190, 254, 212, 155, 190, 95, 57, 26, 188, 9, 227, 187, 62, 174, 114, 110, 62, 218, 13, 237, 187, 6, 139, 237, 61, 10, 57, 4, 190, 215, 65, 250, 189, 239, 230, 18, 63, 250, 139, 126, 191, 91, 44, 192, 62, 24, 53, 152, 189, 15, 188, 187, 61, 98, 60, 117, 61, 57, 238, 75, 191, 53, 241, 152, 189, 154, 99, 16, 190, 71, 193, 96, 59, 103, 59, 58, 62, 160, 209, 151, 191, 97, 155, 250, 188, 13, 204, 203, 62, 121, 3, 252, 189, 11, 239, 36, 63, 8, 39, 17, 61, 63, 113, 80, 190, 4, 224, 3, 190, 160, 221, 20, 190, 59, 229, 151, 190, 5, 178, 140, 61, 205, 179, 115, 191, 110, 173, 54, 190, 191, 56, 218, 190, 36, 255, 54, 62, 127, 104, 130, 62, 13, 60, 222, 61, 226, 181, 42, 62, 85, 30, 1, 62, 13, 165, 63, 62, 189, 161, 154, 60, 161, 201, 189, 60, 28, 178, 175, 190, 161, 62, 191, 62, 194, 85, 20, 189, 204, 103, 137, 59, 250, 20, 172, 190, 199, 93, 180, 190, 228, 127, 72, 189, 204, 21, 18, 191, 156, 206, 0, 62, 77, 210, 45, 191, 68, 49, 48, 191, 10, 11, 82, 190, 223, 2, 82, 62, 0, 22, 4, 62, 9, 188, 55, 190, 210, 250, 101, 190, 199, 79, 12, 190, 180, 187, 0, 191, 169, 177, 60, 62, 148, 97, 239, 189, 76, 205, 123, 62, 70, 123, 155, 190, 191, 143, 235, 191, 11, 60, 17, 191, 129, 49, 238, 189, 68, 241, 150, 190, 170, 173, 126, 62, 230, 183, 27, 61, 153, 8, 116, 62, 0, 118, 189, 189, 81, 221, 2, 62, 117, 230, 167, 62, 80, 241, 163, 62, 184, 158, 19, 62, 54, 7, 140, 191, 109, 10, 204, 189, 158, 183, 177, 62, 139, 43, 178, 189, 12, 200, 41, 62, 109, 252, 122, 62, 23, 253, 221, 61, 14, 132, 231, 189, 27, 162, 246, 61, 238, 172, 137, 60, 229, 165, 218, 189, 222, 213, 93, 60, 179, 182, 25, 190, 80, 232, 132, 61, 129, 20, 232, 61, 189, 52, 19, 190, 197, 161, 66, 189, 114, 231, 85, 189, 157, 227, 52, 190, 13, 9, 14, 190, 112, 235, 32, 62, 122, 59, 27, 61, 161, 223, 23, 190, 110, 235, 91, 190, 171, 133, 149, 61, 4, 41, 180, 61, 37, 211, 137, 189, 159, 241, 143, 61, 223, 143, 166, 61, 159, 20, 23, 190, 247, 34, 7, 190, 187, 48, 27, 188, 110, 179, 90, 188, 6, 38, 3, 190, 77, 140, 220, 61, 146, 22, 53, 190, 205, 100, 140, 60, 98, 212, 147, 190, 199, 85, 117, 61, 93, 84, 147, 62, 211, 104, 12, 191, 147, 193, 205, 60, 131, 47, 52, 61, 40, 116, 5, 190, 13, 80, 244, 189, 217, 90, 116, 190, 234, 55, 34, 189, 178, 127, 111, 60, 181, 232, 116, 62, 155, 100, 155, 190, 223, 95, 150, 62, 130, 18, 210, 189, 186, 60, 149, 190, 14, 231, 207, 187, 215, 127, 138, 61, 37, 117, 194, 189, 149, 41, 235, 61, 228, 27, 55, 190, 218, 188, 51, 62, 218, 19, 122, 62, 240, 96, 18, 62, 135, 27, 248, 61, 247, 154, 2, 190, 209, 197, 7, 63, 68, 182, 239, 61, 72, 100, 130, 61, 215, 203, 45, 190, 195, 90, 5, 62, 239, 102, 151, 61, 106, 28, 54, 189, 250, 190, 237, 59, 125, 77, 48, 189, 10, 196, 48, 190, 77, 41, 17, 61, 24, 168, 72, 59, 16, 245, 164, 189, 66, 20, 237, 60, 190, 11, 8, 190, 165, 70, 21, 62, 146, 159, 180, 61, 72, 194, 31, 190, 129, 129, 183, 189, 191, 214, 25, 190, 181, 245, 148, 61, 125, 54, 205, 188, 99, 71, 232, 61, 245, 221, 25, 188, 2, 117, 244, 189, 160, 167, 10, 190, 73, 161, 35, 186, 116, 50, 180, 187, 171, 132, 34, 62, 156, 132, 189, 189, 248, 252, 228, 189, 201, 246, 138, 189, 160, 249, 35, 190, 93, 3, 10, 189, 107, 140, 4, 190, 229, 48, 91, 61, 57, 85, 254, 61, 250, 216, 0, 62, 241, 189, 67, 190, 177, 67, 184, 189, 235, 100, 162, 60, 215, 170, 173, 62, 219, 11, 131, 62, 187, 189, 15, 187, 26, 17, 9, 62, 111, 101, 255, 62, 92, 157, 158, 62, 69, 189, 21, 190, 139, 133, 162, 189, 223, 115, 191, 190, 183, 158, 190, 190, 36, 187, 145, 189, 241, 67, 52, 62, 204, 142, 130, 190, 88, 19, 139, 62, 70, 157, 130, 190, 102, 152, 39, 191, 224, 86, 15, 191, 230, 113, 36, 62, 50, 152, 25, 191, 167, 196, 0, 191, 175, 76, 174, 190, 151, 219, 148, 190, 204, 8, 152, 62, 255, 244, 180, 191, 10, 186, 206, 61, 139, 13, 223, 190, 146, 129, 108, 62, 65, 4, 180, 62, 207, 217, 150, 190, 72, 250, 183, 61, 149, 165, 154, 188, 193, 30, 231, 187, 22, 107, 39, 191, 48, 212, 241, 188, 175, 108, 158, 190, 65, 50, 16, 190, 121, 35, 27, 61, 43, 225, 18, 61, 160, 12, 187, 190, 253, 136, 20, 190, 85, 98, 139, 188, 185, 250, 13, 190, 52, 8, 229, 61, 183, 129, 229, 190, 237, 10, 59, 188, 3, 135, 230, 190, 62, 236, 3, 190, 145, 203, 21, 190, 64, 176, 76, 58, 139, 145, 185, 61, 210, 234, 86, 62, 85, 158, 81, 190, 113, 67, 211, 61, 8, 9, 87, 62, 211, 164, 16, 62, 57, 207, 19, 61, 83, 78, 174, 61, 1, 148, 38, 190, 234, 80, 179, 62, 31, 18, 221, 188, 207, 153, 7, 62, 153, 52, 18, 62, 16, 115, 30, 62, 49, 100, 60, 62, 21, 201, 12, 191, 210, 252, 142, 190, 39, 148, 146, 190, 115, 210, 152, 189, 122, 38, 239, 61, 127, 181, 140, 60, 248, 179, 225, 189, 176, 80, 115, 190, 55, 130, 169, 62, 65, 54, 8, 191, 160, 34, 134, 62, 13, 228, 77, 190, 220, 17, 250, 190, 184, 6, 95, 191, 70, 89, 120, 62, 156, 234, 159, 61, 1, 248, 51, 62, 71, 35, 143, 62, 241, 122, 5, 190, 85, 198, 184, 60, 206, 125, 83, 62, 53, 89, 129, 62, 11, 59, 143, 190, 238, 217, 27, 62, 68, 80, 67, 60, 25, 56, 39, 190, 139, 141, 124, 62, 222, 219, 205, 189, 186, 24, 163, 61, 27, 15, 23, 62, 111, 0, 84, 61, 189, 155, 221, 62, 186, 150, 32, 191, 90, 198, 33, 190, 52, 95, 23, 62, 182, 76, 114, 61, 45, 47, 138, 61, 101, 26, 234, 61, 40, 128, 102, 190, 177, 128, 48, 61, 56, 107, 1, 62, 181, 131, 209, 190, 79, 12, 130, 62, 63, 115, 245, 189, 197, 15, 44, 190, 37, 80, 185, 190, 199, 163, 48, 61, 58, 103, 115, 61, 107, 119, 24, 62, 67, 219, 173, 60, 201, 139, 131, 62, 169, 202, 224, 62, 46, 211, 155, 61, 171, 64, 167, 61, 246, 48, 157, 190, 221, 63, 35, 63, 30, 157, 241, 60, 215, 240, 91, 190, 156, 11, 97, 190, 191, 238, 59, 189, 31, 18, 84, 62, 63, 175, 136, 189, 60, 96, 214, 60, 252, 156, 35, 191, 237, 242, 167, 60, 183, 25, 146, 190, 69, 130, 112, 191, 104, 17, 165, 189, 205, 39, 148, 191, 96, 136, 255, 190, 101, 192, 174, 190, 31, 241, 164, 62, 244, 203, 127, 62, 88, 229, 39, 62, 235, 219, 5, 191, 40, 173, 234, 189, 201, 105, 172, 62, 174, 177, 146, 190, 137, 193, 227, 190, 91, 192, 87, 63, 64, 134, 19, 190, 15, 154, 218, 191, 1, 252, 184, 190, 74, 250, 173, 187, 244, 19, 150, 190, 85, 60, 223, 61, 182, 36, 240, 189, 64, 138, 190, 190, 66, 84, 169, 190, 181, 56, 19, 191, 151, 44, 74, 62, 233, 115, 91, 191, 176, 69, 73, 191, 125, 51, 59, 189, 61, 202, 111, 187, 66, 30, 14, 190, 178, 212, 178, 62, 217, 66, 195, 189, 206, 63, 100, 61, 55, 228, 245, 188, 14, 205, 44, 62, 223, 210, 119, 190, 230, 113, 179, 61, 210, 166, 223, 62, 91, 0, 166, 62, 135, 171, 1, 62, 45, 146, 135, 61, 208, 7, 92, 189, 45, 168, 113, 62, 101, 230, 129, 187, 73, 206, 31, 61, 112, 211, 32, 61, 76, 25, 99, 62, 171, 100, 6, 190, 232, 206, 53, 62, 176, 98, 166, 62, 255, 254, 32, 189, 243, 162, 14, 62, 80, 217, 46, 190, 164, 134, 128, 62, 160, 131, 97, 189, 135, 108, 81, 62, 167, 24, 244, 61, 248, 127, 93, 191, 166, 26, 75, 62, 24, 119, 128, 190, 112, 216, 28, 61, 81, 82, 0, 63, 29, 177, 48, 63, 79, 134, 138, 62, 95, 172, 160, 62, 177, 33, 13, 190, 166, 96, 106, 189, 26, 225, 149, 62, 209, 171, 220, 62, 223, 39, 25, 191, 230, 202, 230, 190, 143, 12, 39, 63, 115, 177, 198, 191, 116, 186, 244, 62, 92, 126, 103, 190, 55, 81, 205, 190, 141, 193, 142, 190, 145, 190, 171, 62, 206, 53, 249, 190, 91, 77, 4, 62, 74, 189, 195, 190, 27, 1, 205, 191, 243, 11, 183, 191, 137, 149, 177, 191, 219, 170, 215, 61, 142, 238, 75, 191, 66, 214, 196, 62, 250, 235, 25, 62, 81, 226, 128, 189, 240, 131, 140, 62, 93, 130, 121, 189, 69, 149, 46, 62, 172, 140, 38, 62, 118, 95, 199, 190, 118, 196, 136, 189, 229, 88, 132, 62, 25, 190, 130, 190, 247, 17, 91, 61, 213, 115, 214, 62, 144, 89, 120, 62, 111, 108, 136, 62, 109, 124, 221, 60, 143, 76, 32, 62, 243, 184, 13, 62, 89, 221, 56, 61, 69, 98, 136, 62, 142, 44, 219, 60, 113, 93, 116, 62, 137, 50, 158, 189, 156, 70, 42, 62, 74, 7, 213, 58, 20, 245, 172, 62, 3, 87, 212, 189, 104, 235, 178, 190, 155, 87, 97, 190, 26, 40, 46, 62, 18, 114, 167, 188, 103, 160, 143, 191, 36, 178, 169, 189, 209, 94, 34, 62, 238, 191, 9, 62, 182, 55, 224, 189, 50, 25, 170, 190, 85, 152, 130, 62, 89, 136, 127, 61, 101, 156, 141, 62, 173, 240, 71, 191, 163, 86, 140, 61, 41, 208, 197, 61, 79, 106, 225, 61, 33, 242, 188, 190, 128, 181, 46, 189, 189, 178, 111, 189, 2, 175, 192, 190, 200, 135, 4, 190, 170, 146, 139, 190, 163, 135, 123, 189, 202, 55, 243, 190, 238, 201, 172, 190, 253, 174, 16, 190, 164, 128, 148, 61, 229, 199, 19, 62, 223, 108, 139, 188, 168, 253, 153, 190, 223, 144, 22, 62, 173, 68, 212, 62, 104, 0, 125, 62, 149, 12, 98, 190, 77, 19, 71, 189, 1, 124, 59, 63, 46, 35, 125, 190, 91, 10, 129, 188, 167, 96, 36, 190, 62, 28, 150, 189, 22, 186, 9, 62, 90, 115, 147, 61, 86, 152, 236, 61, 224, 213, 97, 190, 86, 72, 207, 189, 202, 52, 113, 62, 233, 118, 193, 189, 36, 161, 20, 190, 64, 5, 172, 62, 200, 2, 154, 62, 28, 251, 40, 62, 33, 105, 188, 61, 135, 152, 23, 190, 66, 105, 50, 189, 50, 172, 253, 189, 232, 232, 101, 62, 140, 139, 4, 190, 214, 149, 49, 62, 209, 148, 168, 190, 196, 158, 1, 190, 28, 167, 73, 62, 38, 215, 142, 60, 60, 128, 179, 61, 214, 136, 162, 190, 52, 96, 42, 190, 62, 127, 129, 189, 113, 0, 135, 61, 24, 146, 118, 191, 124, 239, 243, 60, 66, 77, 96, 62, 183, 24, 116, 62, 130, 215, 55, 62, 117, 43, 111, 60, 29, 197, 63, 61, 84, 19, 49, 62, 133, 20, 86, 62, 137, 62, 164, 191, 133, 245, 20, 61, 13, 239, 111, 59, 65, 46, 21, 190, 116, 129, 245, 61, 96, 216, 138, 190, 110, 149, 173, 190, 79, 161, 58, 62, 137, 180, 57, 62, 74, 114, 155, 190, 215, 84, 78, 62, 75, 193, 158, 191, 112, 149, 187, 189, 207, 217, 246, 189, 246, 174, 7, 62, 104, 214, 19, 188, 90, 139, 211, 60, 12, 251, 190, 188, 167, 33, 42, 62, 201, 39, 112, 62, 76, 140, 144, 62, 221, 248, 227, 189, 58, 143, 129, 191, 226, 215, 31, 63, 120, 17, 130, 189, 92, 6, 172, 61, 49, 96, 124, 189, 102, 181, 68, 191, 231, 112, 103, 59, 26, 120, 37, 191, 171, 5, 250, 60, 97, 243, 132, 190, 87, 187, 105, 61, 57, 213, 158, 61, 215, 212, 197, 189, 9, 223, 239, 189, 221, 35, 106, 62, 239, 66, 37, 62, 176, 37, 88, 62, 178, 109, 90, 189, 154, 29, 123, 190, 144, 222, 200, 188, 212, 160, 11, 62, 168, 217, 255, 61, 60, 135, 145, 190, 16, 7, 14, 62, 5, 246, 130, 190, 217, 199, 30, 191, 176, 29, 46, 190, 181, 174, 89, 62, 230, 13, 128, 190, 220, 67, 42, 191, 166, 135, 20, 190, 17, 167, 158, 189, 26, 4, 71, 189, 36, 225, 59, 191, 171, 123, 81, 62, 146, 254, 171, 62, 149, 16, 162, 61, 177, 198, 197, 188, 186, 243, 59, 191, 225, 236, 133, 189, 171, 205, 17, 61, 203, 105, 99, 190, 210, 230, 56, 62, 87, 199, 78, 62, 71, 161, 126, 190, 118, 60, 124, 61, 201, 73, 215, 62, 46, 5, 15, 61, 36, 50, 222, 62, 92, 66, 110, 189, 170, 155, 141, 61, 39, 42, 25, 61, 254, 59, 48, 190, 11, 48, 122, 62, 138, 108, 84, 60, 13, 195, 58, 62, 131, 132, 143, 190, 198, 198, 56, 190, 28, 59, 253, 188, 141, 24, 108, 62, 12, 29, 157, 189, 79, 241, 24, 190, 8, 162, 151, 190, 217, 25, 42, 190, 113, 180, 10, 59, 144, 209, 103, 191, 180, 213, 177, 61, 178, 167, 157, 62, 66, 131, 38, 189, 188, 151, 199, 61, 72, 204, 75, 190, 244, 137, 128, 188};
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
                alignas(float) const unsigned char memory[] = {78, 107, 18, 189, 71, 16, 70, 61, 174, 13, 189, 189, 191, 189, 71, 62, 252, 214, 25, 62, 57, 58, 71, 61, 163, 239, 246, 61, 61, 27, 7, 62, 10, 49, 165, 189, 54, 128, 221, 61, 186, 113, 131, 189, 120, 20, 168, 61, 54, 127, 34, 62, 31, 202, 40, 187, 174, 141, 138, 190, 250, 81, 38, 62, 202, 237, 167, 188, 169, 74, 22, 62, 78, 16, 241, 188, 219, 140, 181, 60, 192, 169, 54, 62, 165, 21, 153, 62, 216, 103, 169, 61, 82, 109, 1, 62, 234, 250, 224, 61, 66, 119, 227, 190, 100, 28, 156, 61, 93, 52, 24, 190, 97, 81, 175, 62, 40, 90, 196, 59, 179, 53, 79, 62, 150, 244, 1, 62};
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
                alignas(float) const unsigned char memory[] = {29, 8, 8, 190, 6, 98, 88, 63, 78, 46, 240, 187, 97, 225, 176, 59, 233, 36, 98, 189, 141, 146, 107, 191, 253, 38, 201, 63, 188, 217, 73, 60, 224, 1, 83, 63, 142, 200, 77, 62, 30, 43, 169, 190, 155, 173, 16, 191, 115, 205, 137, 62, 98, 124, 140, 63, 242, 243, 84, 191, 245, 222, 137, 63, 240, 144, 194, 189, 238, 0, 192, 61, 141, 118, 131, 189, 130, 73, 117, 191, 208, 187, 134, 61, 53, 93, 219, 62, 167, 198, 183, 62, 14, 116, 144, 191, 71, 14, 170, 190, 162, 9, 210, 63, 180, 97, 189, 190, 77, 88, 24, 63, 117, 25, 57, 190, 80, 153, 12, 191, 168, 185, 209, 190, 189, 97, 169, 190, 221, 174, 145, 61, 192, 35, 100, 189, 237, 157, 192, 189, 9, 116, 162, 190, 70, 221, 180, 190, 171, 131, 8, 186, 38, 47, 140, 62, 209, 202, 157, 190, 2, 35, 19, 62, 68, 14, 239, 189, 147, 125, 55, 190, 247, 231, 158, 62, 234, 77, 112, 60, 109, 188, 45, 61, 244, 230, 100, 63, 173, 67, 135, 190, 170, 158, 132, 60, 117, 36, 178, 190, 213, 98, 120, 189, 51, 213, 18, 190, 129, 29, 1, 62, 222, 240, 9, 189, 203, 9, 200, 189, 223, 16, 77, 187, 2, 135, 237, 60, 172, 54, 163, 62, 128, 120, 202, 189, 191, 81, 125, 61, 67, 31, 107, 190, 203, 244, 64, 62, 198, 238, 27, 190, 61, 1, 138, 188};
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
                alignas(float) const unsigned char memory[] = {229, 187, 240, 189, 50, 149, 210, 190};
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
    alignas(float) const unsigned char memory[] = {237, 60, 209, 62, 113, 196, 189, 191, 179, 202, 155, 63};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 3, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

// NOTE: This code export assumes that the endianness of the target platform is the same as the endianness of the source platform
#include <rl_tools/containers.h>
namespace rl_tools::checkpoint::example::output {
    static_assert(sizeof(unsigned char) == 1);
    alignas(float) const unsigned char memory[] = {143, 4, 41, 64, 84, 137, 231, 191};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 2, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

namespace rl_tools::checkpoint::meta{
   char name[] = "experiments/2024-05-27_19-39-12/b738cd1_zoo_algorithm_environment/sac_pendulum-v1/0035/steps/000000000020000";
   char commit_hash[] = "b738cd18dcbee2b66aa05c642653771cd0e46c8b";
}