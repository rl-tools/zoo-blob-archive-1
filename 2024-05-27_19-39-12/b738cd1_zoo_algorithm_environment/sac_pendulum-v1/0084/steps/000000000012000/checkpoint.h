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
                alignas(float) const unsigned char memory[] = {9, 168, 28, 191, 32, 227, 139, 62, 132, 120, 29, 63, 7, 230, 218, 62, 244, 13, 149, 63, 149, 154, 131, 62, 17, 212, 70, 61, 112, 174, 201, 190, 145, 28, 222, 190, 114, 38, 65, 63, 147, 46, 32, 191, 147, 97, 38, 191, 143, 249, 31, 63, 116, 4, 17, 63, 103, 93, 137, 62, 98, 72, 133, 62, 189, 8, 174, 191, 237, 21, 207, 190, 75, 192, 13, 63, 127, 35, 117, 63, 102, 132, 187, 189, 46, 150, 60, 189, 0, 183, 8, 190, 128, 85, 172, 62, 220, 149, 22, 191, 87, 114, 66, 63, 71, 220, 171, 62, 15, 77, 44, 63, 50, 128, 55, 191, 236, 7, 49, 190, 42, 150, 160, 62, 186, 201, 146, 62, 255, 41, 81, 190, 58, 107, 114, 190, 49, 39, 138, 190, 95, 79, 240, 190, 222, 52, 241, 190, 197, 243, 66, 191, 106, 41, 164, 62, 134, 216, 9, 190, 89, 91, 47, 191, 122, 172, 225, 190, 185, 20, 1, 62, 23, 127, 136, 191, 207, 113, 167, 190, 16, 141, 45, 63, 193, 39, 221, 62, 71, 216, 39, 191, 201, 51, 31, 63, 35, 88, 74, 63, 119, 51, 136, 62, 156, 5, 0, 191, 198, 119, 54, 63, 154, 79, 197, 61, 62, 98, 207, 62, 38, 222, 78, 191, 167, 44, 157, 62, 61, 220, 2, 191, 27, 53, 139, 62, 220, 201, 29, 61, 236, 94, 6, 62, 64, 116, 230, 189, 20, 215, 158, 186, 48, 181, 21, 190, 5, 89, 90, 63, 227, 255, 86, 62, 53, 55, 215, 62, 102, 130, 161, 189, 9, 100, 37, 191, 207, 49, 69, 62, 227, 58, 2, 63, 194, 9, 145, 62, 238, 94, 158, 190, 134, 36, 167, 62, 57, 83, 154, 190, 155, 144, 19, 63, 61, 163, 23, 191, 110, 124, 239, 190, 198, 219, 73, 190, 180, 240, 165, 190, 187, 47, 224, 62, 177, 45, 238, 189, 73, 201, 1, 191, 163, 195, 170, 62, 1, 246, 205, 59, 135, 2, 140, 191, 145, 45, 146, 62, 196, 74, 91, 191, 253, 151, 114, 189, 92, 108, 2, 191, 111, 54, 221, 60, 79, 222, 87, 191, 16, 77, 136, 190, 141, 82, 144, 189, 142, 100, 64, 191, 203, 21, 212, 190};
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
                alignas(float) const unsigned char memory[] = {208, 29, 234, 190, 98, 132, 90, 190, 106, 148, 246, 187, 101, 74, 215, 61, 203, 93, 43, 191, 145, 196, 249, 189, 17, 198, 186, 62, 72, 27, 132, 189, 5, 124, 61, 190, 65, 196, 147, 62, 146, 28, 18, 63, 154, 100, 147, 190, 2, 50, 96, 190, 91, 123, 7, 191, 137, 101, 141, 190, 162, 99, 217, 62, 149, 69, 231, 62, 165, 73, 240, 62, 5, 49, 141, 62, 94, 106, 68, 63, 203, 171, 120, 190, 165, 93, 255, 62, 77, 42, 138, 62, 24, 136, 157, 62, 30, 167, 37, 191, 15, 19, 133, 61, 16, 200, 1, 191, 166, 88, 77, 190, 96, 143, 35, 190, 230, 163, 124, 62, 235, 212, 153, 190, 105, 180, 187, 190};
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
                alignas(float) const unsigned char memory[] = {192, 83, 16, 188, 134, 145, 187, 61, 182, 159, 161, 187, 30, 196, 75, 62, 151, 149, 33, 63, 11, 53, 171, 61, 120, 18, 96, 62, 132, 106, 16, 190, 233, 248, 209, 189, 98, 140, 4, 62, 176, 80, 204, 61, 182, 54, 32, 190, 223, 184, 222, 190, 83, 189, 86, 189, 70, 251, 170, 189, 102, 91, 77, 188, 68, 173, 231, 189, 130, 55, 193, 190, 144, 144, 1, 190, 50, 248, 204, 190, 98, 223, 205, 186, 228, 33, 202, 190, 44, 157, 59, 61, 206, 60, 191, 61, 235, 239, 161, 62, 96, 222, 47, 189, 87, 209, 56, 190, 175, 42, 127, 189, 122, 207, 43, 191, 141, 39, 16, 61, 102, 6, 235, 189, 50, 95, 110, 190, 156, 209, 19, 190, 108, 208, 165, 189, 226, 216, 1, 189, 135, 248, 201, 60, 76, 94, 179, 189, 135, 7, 27, 190, 216, 38, 135, 188, 190, 252, 5, 62, 76, 175, 252, 189, 22, 28, 198, 189, 113, 218, 178, 61, 152, 184, 207, 61, 82, 100, 38, 190, 12, 137, 33, 190, 67, 212, 100, 59, 31, 192, 8, 189, 160, 235, 251, 187, 52, 160, 145, 61, 94, 222, 97, 61, 208, 190, 230, 188, 83, 120, 188, 61, 105, 212, 255, 189, 242, 110, 101, 189, 164, 138, 199, 189, 131, 34, 192, 61, 150, 118, 214, 189, 26, 74, 173, 189, 3, 182, 236, 189, 120, 70, 32, 190, 190, 193, 50, 190, 24, 231, 40, 190, 107, 138, 40, 187, 208, 167, 218, 60, 173, 99, 194, 60, 16, 47, 18, 189, 40, 19, 118, 190, 124, 213, 168, 188, 95, 60, 75, 190, 6, 110, 176, 61, 211, 187, 11, 62, 197, 130, 154, 61, 149, 7, 84, 190, 176, 61, 191, 61, 2, 44, 25, 189, 124, 46, 223, 61, 17, 103, 202, 189, 183, 236, 147, 190, 125, 52, 25, 191, 142, 228, 83, 189, 241, 169, 67, 62, 180, 154, 107, 190, 254, 253, 141, 62, 101, 144, 238, 61, 61, 166, 102, 188, 127, 61, 37, 190, 162, 121, 25, 190, 150, 135, 235, 61, 153, 11, 137, 190, 228, 23, 82, 61, 194, 17, 120, 189, 192, 245, 230, 188, 163, 104, 7, 62, 126, 197, 219, 189, 159, 72, 156, 61, 123, 68, 68, 62, 53, 214, 60, 191, 34, 134, 122, 188, 78, 120, 209, 62, 77, 45, 42, 191, 233, 133, 205, 61, 144, 129, 205, 61, 56, 236, 133, 190, 11, 212, 80, 62, 126, 56, 182, 61, 13, 131, 228, 61, 53, 232, 30, 190, 242, 169, 22, 63, 23, 210, 237, 61, 147, 46, 167, 189, 248, 104, 59, 61, 223, 62, 178, 190, 240, 75, 34, 188, 76, 138, 26, 63, 74, 179, 169, 190, 38, 13, 215, 60, 14, 170, 166, 190, 148, 138, 54, 190, 128, 243, 243, 189, 211, 191, 101, 62, 100, 245, 234, 62, 125, 157, 175, 190, 146, 231, 201, 62, 109, 70, 242, 190, 156, 25, 168, 189, 25, 228, 2, 190, 70, 181, 36, 191, 247, 51, 51, 189, 136, 210, 18, 60, 180, 179, 101, 62, 25, 24, 153, 60, 35, 198, 55, 190, 245, 27, 188, 61, 68, 167, 11, 62, 80, 74, 84, 61, 203, 132, 135, 188, 35, 88, 7, 188, 99, 47, 16, 190, 78, 24, 2, 190, 18, 217, 94, 62, 115, 217, 19, 62, 166, 23, 10, 190, 186, 174, 81, 191, 237, 95, 144, 62, 169, 18, 216, 62, 89, 43, 167, 62, 145, 190, 54, 62, 133, 102, 33, 62, 114, 8, 7, 62, 123, 76, 239, 190, 171, 230, 84, 62, 38, 220, 80, 190, 104, 12, 215, 187, 106, 51, 136, 189, 116, 216, 33, 189, 197, 51, 55, 191, 69, 55, 0, 190, 0, 209, 220, 189, 138, 118, 151, 191, 190, 124, 182, 61, 67, 158, 192, 190, 216, 194, 88, 189, 75, 71, 152, 62, 241, 205, 80, 191, 172, 29, 3, 190, 155, 101, 32, 61, 236, 24, 189, 58, 71, 228, 115, 62, 226, 212, 252, 61, 178, 27, 22, 62, 166, 255, 148, 61, 191, 93, 50, 60, 252, 9, 223, 189, 206, 43, 22, 190, 238, 158, 36, 62, 101, 239, 221, 62, 145, 144, 73, 190, 194, 225, 177, 60, 27, 89, 194, 61, 13, 209, 41, 190, 150, 117, 46, 62, 110, 65, 46, 190, 249, 112, 49, 62, 151, 167, 179, 60, 29, 155, 129, 60, 37, 176, 156, 190, 106, 143, 191, 189, 215, 202, 52, 189, 119, 140, 14, 61, 232, 118, 183, 189, 172, 234, 77, 189, 185, 233, 61, 62, 202, 102, 49, 61, 34, 96, 85, 62, 180, 102, 24, 191, 106, 185, 89, 62, 86, 175, 9, 191, 231, 98, 220, 62, 65, 181, 81, 61, 126, 121, 186, 61, 147, 57, 42, 61, 192, 125, 89, 62, 148, 207, 110, 62, 169, 82, 5, 190, 122, 131, 34, 191, 48, 151, 184, 190, 186, 108, 132, 62, 33, 251, 124, 62, 49, 2, 181, 61, 136, 146, 220, 190, 78, 153, 211, 61, 241, 184, 28, 62, 129, 100, 204, 61, 211, 232, 165, 61, 220, 227, 220, 61, 46, 180, 239, 190, 243, 5, 0, 191, 36, 139, 2, 62, 130, 0, 213, 189, 166, 202, 253, 62, 33, 200, 252, 62, 146, 121, 181, 189, 157, 102, 15, 62, 58, 226, 9, 191, 67, 194, 8, 191, 44, 85, 134, 189, 227, 106, 132, 62, 158, 216, 41, 189, 229, 75, 57, 190, 82, 24, 71, 62, 31, 32, 133, 190, 246, 75, 20, 60, 175, 252, 15, 62, 192, 232, 94, 62, 43, 182, 160, 188, 126, 155, 191, 62, 200, 187, 48, 62, 239, 212, 118, 189, 247, 160, 3, 190, 4, 209, 16, 190, 25, 7, 101, 191, 7, 161, 6, 63, 38, 100, 140, 189, 92, 160, 170, 189, 72, 237, 59, 191, 158, 128, 192, 61, 212, 254, 143, 61, 37, 130, 92, 62, 50, 14, 27, 62, 205, 108, 212, 190, 52, 125, 21, 63, 242, 17, 27, 61, 93, 245, 46, 188, 234, 31, 201, 59, 25, 27, 115, 190, 73, 124, 181, 60, 102, 138, 190, 60, 172, 138, 57, 190, 232, 68, 14, 61, 63, 120, 176, 189, 45, 157, 17, 190, 52, 154, 209, 189, 121, 90, 237, 61, 109, 167, 198, 189, 120, 244, 116, 190, 63, 71, 212, 189, 72, 236, 146, 61, 121, 38, 18, 62, 197, 74, 167, 189, 21, 166, 145, 60, 244, 95, 190, 189, 42, 109, 141, 189, 107, 141, 18, 61, 13, 84, 35, 62, 3, 212, 12, 190, 233, 218, 34, 62, 204, 21, 50, 61, 70, 158, 41, 61, 232, 110, 61, 190, 28, 210, 99, 60, 150, 178, 187, 188, 100, 53, 136, 189, 242, 231, 46, 189, 240, 95, 196, 61, 208, 98, 229, 61, 157, 122, 9, 190, 186, 67, 5, 62, 213, 141, 129, 189, 211, 227, 33, 62, 244, 16, 242, 188, 41, 92, 182, 59, 225, 207, 226, 62, 66, 135, 58, 190, 173, 94, 206, 62, 194, 46, 157, 61, 192, 89, 116, 190, 46, 248, 113, 190, 238, 224, 228, 61, 158, 199, 126, 61, 170, 170, 115, 191, 55, 147, 81, 61, 255, 18, 159, 187, 138, 21, 150, 62, 60, 16, 144, 189, 107, 107, 233, 61, 151, 179, 196, 190, 28, 226, 46, 190, 64, 245, 165, 61, 255, 70, 152, 190, 49, 145, 133, 62, 59, 35, 178, 189, 78, 30, 173, 62, 157, 172, 55, 62, 29, 184, 78, 62, 72, 71, 35, 191, 45, 18, 149, 190, 163, 44, 1, 190, 105, 156, 173, 188, 46, 102, 165, 60, 25, 79, 199, 189, 33, 246, 61, 190, 132, 211, 144, 189, 82, 182, 64, 61, 45, 145, 122, 190, 171, 71, 68, 190, 27, 30, 54, 60, 202, 123, 110, 189, 50, 35, 7, 62, 131, 45, 116, 62, 57, 108, 56, 62, 18, 70, 5, 62, 161, 91, 179, 61, 116, 198, 23, 60, 233, 49, 90, 62, 101, 131, 45, 62, 108, 92, 174, 62, 110, 143, 26, 190, 100, 147, 108, 189, 7, 123, 141, 62, 83, 183, 11, 190, 17, 235, 135, 62, 226, 77, 176, 61, 161, 240, 163, 61, 60, 21, 21, 186, 36, 185, 84, 190, 7, 104, 109, 188, 44, 89, 150, 189, 248, 216, 129, 62, 255, 204, 255, 61, 67, 35, 46, 61, 133, 101, 175, 61, 234, 19, 0, 191, 150, 103, 186, 190, 140, 109, 168, 189, 35, 189, 21, 189, 10, 208, 178, 191, 134, 95, 69, 61, 215, 253, 25, 62, 126, 66, 171, 190, 18, 74, 228, 190, 60, 114, 243, 61, 153, 41, 171, 189, 108, 32, 71, 62, 197, 182, 111, 188, 59, 147, 146, 189, 127, 209, 226, 189, 166, 192, 249, 61, 254, 43, 183, 62, 83, 84, 60, 191, 142, 133, 182, 62, 83, 112, 35, 190, 32, 90, 229, 189, 134, 225, 73, 62, 217, 251, 204, 61, 74, 191, 113, 62, 13, 90, 181, 61, 222, 254, 125, 61, 234, 177, 220, 190, 72, 58, 34, 190, 242, 16, 60, 62, 133, 104, 216, 189, 249, 104, 154, 61, 109, 245, 150, 61, 60, 159, 172, 190, 45, 74, 30, 62, 231, 242, 131, 62, 87, 57, 205, 186, 217, 234, 213, 189, 31, 148, 217, 59, 109, 209, 129, 188, 197, 70, 118, 60, 194, 44, 21, 188, 10, 27, 79, 189, 25, 53, 21, 62, 122, 124, 161, 62, 52, 193, 230, 190, 218, 69, 53, 61, 81, 228, 33, 62, 91, 194, 234, 189, 242, 104, 186, 62, 11, 252, 80, 62, 171, 233, 194, 190, 255, 16, 198, 61, 235, 117, 246, 61, 195, 1, 151, 62, 145, 33, 158, 189, 163, 197, 53, 190, 230, 38, 121, 190, 36, 26, 133, 190, 40, 80, 58, 190, 203, 162, 34, 191, 135, 103, 179, 62, 50, 67, 85, 62, 210, 113, 118, 62, 90, 163, 183, 62, 121, 161, 30, 191, 175, 135, 110, 191, 183, 145, 24, 190, 168, 104, 159, 62, 195, 16, 160, 190, 234, 152, 59, 59, 103, 19, 71, 62, 214, 127, 147, 190, 38, 161, 164, 189, 149, 12, 23, 62, 25, 4, 23, 62, 227, 166, 245, 189, 245, 101, 7, 63, 3, 249, 246, 60, 45, 153, 65, 190, 254, 229, 66, 59, 110, 152, 72, 190, 117, 48, 39, 191, 82, 209, 28, 63, 79, 153, 84, 190, 101, 110, 161, 61, 202, 107, 32, 191, 103, 224, 203, 60, 209, 17, 20, 189, 225, 18, 228, 61, 249, 254, 159, 62, 34, 11, 48, 190, 189, 227, 231, 62, 121, 168, 171, 188, 148, 77, 1, 190, 203, 126, 207, 188, 146, 78, 76, 190, 119, 30, 15, 188, 234, 72, 230, 61, 129, 165, 129, 189, 84, 11, 220, 189, 27, 87, 14, 62, 250, 89, 174, 61, 139, 232, 65, 190, 100, 7, 38, 190, 46, 15, 79, 61, 65, 69, 191, 61, 202, 3, 200, 188, 28, 131, 41, 190, 182, 160, 12, 190, 7, 18, 183, 189, 207, 13, 2, 190, 31, 245, 44, 62, 170, 167, 42, 61, 16, 153, 95, 189, 12, 144, 116, 188, 82, 35, 18, 189, 59, 52, 35, 190, 184, 205, 70, 190, 79, 43, 180, 189, 31, 148, 100, 189, 220, 94, 245, 189, 91, 21, 38, 190, 172, 216, 63, 61, 104, 60, 68, 190, 189, 60, 220, 61, 94, 140, 216, 189, 193, 100, 29, 190, 213, 187, 205, 61, 193, 170, 1, 188, 94, 72, 57, 190, 170, 21, 242, 189, 127, 144, 206, 61, 207, 25, 255, 190, 147, 118, 140, 190, 88, 210, 139, 62, 89, 166, 148, 189, 145, 201, 0, 62, 186, 26, 14, 61, 158, 215, 154, 62, 233, 120, 74, 59, 138, 189, 63, 189, 17, 231, 19, 62, 191, 252, 203, 189, 70, 150, 54, 62, 129, 59, 234, 62, 51, 103, 92, 190, 185, 214, 11, 62, 247, 106, 138, 189, 7, 233, 173, 61, 113, 65, 247, 61, 207, 191, 124, 189, 102, 122, 40, 62, 42, 183, 29, 62, 89, 114, 1, 62, 135, 12, 51, 61, 165, 23, 67, 190, 216, 95, 59, 62, 163, 36, 236, 188, 210, 137, 31, 189, 7, 224, 67, 189, 10, 169, 205, 61, 173, 21, 242, 60, 160, 46, 242, 61, 128, 71, 30, 62, 207, 77, 207, 189, 198, 130, 103, 61, 11, 132, 160, 189, 18, 40, 230, 61, 232, 167, 226, 189, 216, 86, 39, 190, 70, 31, 18, 189, 61, 7, 67, 61, 207, 23, 3, 62, 13, 114, 148, 189, 206, 195, 246, 61, 49, 195, 137, 189, 238, 229, 124, 61, 114, 21, 28, 190, 73, 130, 234, 189, 43, 82, 6, 61, 121, 170, 216, 61, 221, 66, 2, 60, 43, 45, 210, 60, 19, 203, 49, 190, 222, 240, 114, 61, 204, 55, 44, 190, 130, 96, 10, 188, 59, 208, 85, 190, 13, 5, 9, 61, 79, 30, 4, 190, 173, 159, 2, 190, 64, 46, 23, 60, 120, 215, 148, 61, 195, 51, 137, 62, 192, 15, 100, 62, 108, 115, 95, 189, 107, 218, 94, 62, 180, 247, 220, 189, 54, 109, 53, 190, 4, 254, 18, 62, 200, 137, 29, 190, 155, 183, 226, 61, 211, 190, 65, 62, 156, 244, 66, 62, 254, 212, 195, 190, 234, 176, 65, 189, 94, 204, 154, 189, 191, 183, 78, 60, 235, 26, 119, 62, 164, 236, 100, 62, 62, 54, 252, 190, 146, 115, 91, 62, 25, 173, 250, 188, 188, 219, 220, 61, 116, 125, 79, 189, 197, 151, 220, 61, 24, 204, 189, 189, 178, 4, 151, 190, 230, 175, 27, 62, 227, 129, 232, 189, 239, 157, 216, 62, 173, 174, 167, 62, 2, 93, 187, 61, 104, 81, 102, 62, 232, 247, 55, 188, 236, 190, 13, 190, 148, 108, 172, 189, 57, 166, 170, 188, 216, 214, 151, 190, 125, 68, 167, 61, 201, 72, 51, 188, 181, 193, 128, 189, 158, 139, 150, 61, 246, 199, 191, 61, 167, 148, 66, 62, 214, 215, 52, 62, 141, 150, 171, 189, 58, 252, 151, 61, 231, 208, 206, 189, 169, 18, 215, 189, 130, 68, 166, 62, 218, 252, 155, 60, 138, 83, 18, 190, 228, 236, 151, 62, 19, 64, 242, 61, 247, 140, 174, 62, 225, 124, 32, 61, 63, 53, 142, 189, 97, 163, 43, 190, 110, 137, 186, 189, 168, 106, 87, 188, 112, 36, 170, 189, 251, 128, 190, 62, 242, 112, 160, 61, 107, 106, 145, 62, 157, 164, 48, 62, 39, 147, 65, 190, 162, 119, 215, 190, 49, 95, 193, 190, 222, 69, 125, 190, 219, 151, 105, 191, 93, 84, 73, 191, 91, 59, 173, 60, 142, 228, 84, 190, 186, 191, 40, 62, 173, 105, 16, 190, 177, 223, 70, 189, 115, 226, 202, 190, 30, 43, 145, 62, 200, 75, 236, 190, 34, 26, 47, 191, 201, 253, 41, 191, 41, 29, 183, 189, 44, 64, 66, 62, 129, 112, 79, 62, 46, 131, 199, 62, 182, 181, 22, 188, 164, 238, 164, 62, 59, 133, 132, 191, 114, 56, 180, 188, 75, 170, 203, 62, 237, 253, 25, 190, 189, 197, 15, 190, 169, 146, 105, 62, 246, 255, 143, 190, 123, 130, 211, 189, 207, 249, 212, 190, 207, 72, 234, 191, 172, 1, 101, 189, 2, 55, 12, 190, 79, 50, 81, 190, 204, 184, 32, 190, 140, 4, 153, 189, 236, 125, 248, 189, 197, 57, 161, 188, 178, 65, 32, 189, 23, 115, 42, 188, 234, 206, 221, 59, 4, 22, 254, 59, 105, 234, 160, 189, 145, 214, 33, 189, 239, 208, 189, 189, 84, 30, 179, 60, 208, 29, 178, 61, 210, 95, 169, 61, 160, 8, 50, 190, 73, 220, 41, 190, 202, 22, 60, 187, 82, 220, 12, 62, 72, 247, 9, 60, 180, 13, 13, 190, 34, 142, 28, 60, 36, 201, 3, 62, 34, 123, 175, 60, 42, 119, 19, 190, 11, 13, 242, 189, 30, 221, 13, 190, 255, 162, 165, 61, 172, 61, 237, 189, 205, 61, 75, 189, 243, 232, 17, 189, 233, 161, 158, 190, 157, 185, 252, 189, 210, 222, 64, 189, 132, 162, 38, 191, 229, 53, 5, 191, 160, 28, 49, 62, 244, 169, 81, 190, 147, 113, 36, 62, 49, 37, 155, 189, 24, 21, 174, 61, 235, 115, 146, 190, 61, 227, 95, 62, 32, 143, 152, 188, 85, 16, 245, 190, 140, 55, 61, 191, 120, 131, 118, 189, 12, 75, 11, 62, 51, 167, 22, 62, 134, 52, 45, 62, 35, 143, 239, 189, 227, 164, 27, 62, 4, 60, 26, 191, 181, 14, 251, 189, 73, 73, 23, 62, 170, 253, 53, 62, 58, 73, 218, 189, 177, 242, 150, 62, 146, 238, 160, 190, 97, 110, 189, 61, 124, 69, 170, 190, 188, 21, 191, 191, 115, 72, 136, 190, 133, 125, 40, 191, 168, 254, 79, 190, 252, 248, 118, 189, 97, 191, 211, 190, 228, 50, 8, 191, 164, 59, 64, 189, 106, 70, 68, 190, 242, 142, 46, 189, 97, 28, 201, 190, 161, 232, 14, 60, 187, 46, 21, 62, 186, 219, 5, 63, 87, 80, 141, 190, 92, 228, 32, 191, 234, 194, 220, 61, 59, 177, 32, 190, 21, 237, 155, 190, 50, 159, 227, 62, 109, 233, 162, 61, 242, 249, 24, 62, 124, 17, 203, 189, 109, 203, 231, 61, 67, 86, 69, 189, 249, 198, 24, 63, 44, 103, 133, 189, 163, 107, 182, 190, 137, 9, 209, 62, 92, 8, 250, 189, 96, 122, 110, 62, 30, 35, 236, 190, 64, 80, 249, 190, 157, 198, 166, 190, 245, 152, 223, 190, 8, 204, 129, 188, 81, 57, 171, 62, 70, 181, 85, 189, 25, 202, 210, 61, 70, 20, 8, 61, 160, 176, 150, 188, 179, 108, 129, 61, 138, 12, 133, 62, 228, 231, 203, 189, 242, 239, 102, 190, 36, 87, 4, 62, 64, 54, 114, 189, 48, 58, 38, 61, 99, 209, 42, 189, 239, 40, 186, 189, 84, 217, 67, 191, 146, 239, 217, 62, 80, 91, 48, 190, 150, 174, 197, 189, 201, 152, 103, 191, 189, 72, 201, 58, 218, 217, 59, 61, 105, 125, 124, 61, 35, 195, 184, 62, 108, 14, 130, 190, 22, 119, 161, 62, 34, 37, 219, 189, 129, 201, 102, 189, 37, 84, 157, 187, 55, 78, 194, 189, 105, 223, 124, 190, 0, 129, 76, 62, 165, 30, 154, 189, 216, 19, 87, 189, 134, 81, 91, 61, 85, 50, 186, 62, 55, 240, 201, 190, 69, 178, 216, 61, 78, 23, 13, 191, 144, 1, 254, 188, 200, 170, 13, 190, 202, 4, 27, 62, 138, 24, 58, 190, 102, 235, 106, 62, 160, 34, 170, 62, 242, 124, 26, 189, 102, 47, 231, 62, 95, 142, 10, 190, 185, 151, 113, 62, 68, 52, 126, 190, 43, 95, 6, 190, 50, 2, 157, 62, 195, 210, 3, 62, 41, 43, 209, 62, 103, 203, 63, 62, 102, 87, 213, 59, 217, 133, 102, 190, 186, 17, 101, 60, 150, 122, 158, 62, 115, 82, 53, 61, 203, 174, 146, 61, 6, 15, 178, 61, 218, 216, 138, 190, 108, 119, 55, 62, 142, 180, 17, 62, 214, 202, 6, 190, 228, 73, 32, 190, 46, 52, 59, 189, 25, 3, 18, 189, 148, 217, 234, 189, 109, 207, 223, 60, 38, 208, 95, 62, 20, 20, 14, 61, 63, 53, 136, 62, 78, 215, 2, 191, 223, 247, 67, 189, 229, 37, 2, 60, 52, 242, 149, 58, 49, 5, 187, 62, 149, 4, 230, 62, 246, 115, 17, 191, 38, 202, 118, 62, 21, 255, 215, 189, 211, 117, 216, 62, 176, 136, 43, 62, 190, 190, 17, 60, 43, 106, 204, 190, 154, 130, 225, 189, 52, 78, 154, 190, 119, 197, 70, 191, 156, 12, 35, 58, 178, 44, 55, 62, 190, 25, 136, 62, 22, 100, 77, 62, 116, 141, 5, 190, 176, 240, 135, 190, 251, 55, 12, 190, 47, 33, 43, 191, 205, 37, 190, 190, 199, 20, 187, 61, 11, 226, 194, 190, 22, 204, 146, 60, 153, 182, 14, 190, 96, 156, 161, 189, 40, 48, 246, 189, 231, 199, 181, 190, 103, 72, 128, 62, 89, 179, 2, 191, 85, 184, 104, 61, 5, 90, 171, 190, 169, 202, 82, 190, 86, 100, 131, 61, 23, 61, 212, 61, 55, 79, 190, 62, 72, 99, 31, 190, 85, 39, 46, 190, 154, 250, 193, 190, 143, 72, 203, 190, 159, 192, 179, 190, 61, 188, 33, 191, 92, 186, 76, 190, 164, 37, 35, 62, 108, 152, 137, 62, 16, 177, 49, 62, 161, 106, 202, 189, 52, 51, 100, 190, 14, 102, 172, 61, 116, 243, 112, 62, 199, 66, 188, 61, 226, 199, 106, 190, 228, 128, 0, 62, 215, 194, 239, 190, 182, 86, 185, 62, 102, 25, 186, 189, 163, 81, 64, 190, 119, 61, 144, 60, 35, 41, 203, 61, 217, 43, 52, 62, 122, 122, 19, 189, 99, 44, 1, 191, 127, 170, 137, 190, 26, 15, 22, 61, 116, 68, 117, 62, 46, 70, 94, 62, 6, 20, 197, 190, 98, 242, 204, 61, 199, 247, 248, 189, 199, 42, 142, 62, 164, 247, 247, 60, 103, 174, 18, 190, 7, 109, 140, 189, 245, 168, 208, 190, 154, 155, 206, 61, 154, 79, 248, 189, 84, 11, 157, 62, 212, 79, 241, 61, 12, 178, 83, 61, 113, 3, 13, 62, 140, 9, 211, 190, 39, 124, 209, 61, 49, 196, 39, 190, 96, 62, 250, 190, 135, 84, 140, 190, 236, 156, 167, 191, 195, 94, 250, 62, 241, 123, 170, 190, 147, 73, 158, 62, 66, 143, 138, 191, 53, 163, 140, 62, 223, 222, 191, 189, 212, 146, 78, 62, 65, 78, 183, 62, 179, 17, 179, 191, 126, 241, 81, 62, 176, 150, 98, 188, 150, 95, 145, 62, 200, 30, 157, 190, 238, 219, 117, 61, 23, 77, 70, 61, 198, 67, 151, 62, 74, 232, 105, 190, 121, 224, 32, 190, 113, 206, 61, 63, 78, 145, 26, 191, 51, 248, 167, 190, 109, 228, 175, 62, 112, 170, 9, 191, 25, 233, 27, 62, 188, 118, 39, 191, 27, 231, 203, 191, 161, 28, 76, 61, 208, 80, 42, 189, 161, 143, 179, 61, 76, 189, 201, 189, 39, 74, 237, 61, 118, 79, 171, 189, 146, 208, 15, 190, 238, 135, 29, 190, 240, 240, 10, 189, 240, 148, 171, 189, 129, 121, 251, 189, 99, 215, 69, 190, 218, 146, 17, 190, 232, 99, 92, 189, 124, 178, 221, 61, 22, 4, 223, 189, 17, 105, 238, 189, 93, 98, 33, 62, 162, 163, 211, 188, 81, 251, 34, 189, 120, 12, 90, 189, 199, 117, 218, 189, 23, 165, 201, 61, 182, 250, 164, 61, 222, 143, 235, 189, 164, 140, 6, 62, 215, 120, 4, 190, 147, 55, 135, 61, 146, 16, 251, 189, 154, 228, 193, 61, 123, 109, 158, 61, 32, 162, 4, 62, 234, 3, 36, 60, 231, 45, 23, 62, 220, 138, 111, 189, 177, 55, 220, 61, 27, 66, 5, 190, 112, 236, 62, 190, 225, 110, 107, 189, 249, 73, 6, 61, 245, 105, 233, 61, 201, 131, 20, 62, 24, 25, 65, 189, 66, 235, 10, 62, 223, 128, 193, 189, 239, 159, 23, 190, 142, 38, 197, 61, 132, 158, 45, 61, 129, 80, 244, 189, 55, 225, 209, 188, 105, 0, 208, 60, 14, 3, 139, 60, 176, 39, 170, 61, 40, 153, 7, 190, 73, 237, 252, 60, 234, 13, 154, 189, 184, 122, 157, 189, 105, 28, 207, 189, 169, 89, 30, 190, 36, 12, 146, 188, 238, 0, 74, 61, 13, 12, 152, 61, 122, 215, 242, 188, 134, 191, 87, 190, 201, 14, 204, 189, 180, 52, 36, 191, 254, 251, 147, 190, 89, 165, 39, 190, 154, 11, 4, 191, 171, 237, 140, 189, 48, 206, 192, 61, 134, 253, 28, 190, 63, 51, 143, 62, 234, 131, 42, 189, 231, 64, 165, 60, 240, 244, 206, 60, 81, 221, 99, 62, 105, 178, 36, 190, 181, 208, 90, 190, 22, 151, 35, 190, 233, 242, 179, 187, 247, 65, 204, 189, 41, 115, 19, 62, 90, 188, 228, 60, 48, 175, 62, 189, 147, 142, 14, 62, 12, 102, 132, 190, 119, 8, 142, 190, 141, 15, 197, 62, 19, 27, 186, 61, 43, 72, 34, 190, 114, 235, 128, 62, 117, 86, 105, 190, 124, 165, 173, 189, 220, 194, 175, 190, 110, 54, 55, 191};
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
                alignas(float) const unsigned char memory[] = {237, 29, 123, 190, 144, 226, 5, 189, 233, 71, 30, 189, 171, 196, 34, 62, 132, 211, 208, 61, 21, 11, 51, 62, 202, 23, 205, 61, 43, 93, 146, 60, 125, 146, 65, 190, 255, 196, 205, 188, 28, 37, 212, 61, 10, 107, 205, 61, 56, 187, 121, 62, 236, 79, 4, 61, 215, 152, 141, 189, 117, 93, 137, 62, 188, 57, 70, 190, 147, 208, 127, 189, 206, 120, 71, 62, 121, 14, 222, 62, 170, 236, 94, 190, 88, 6, 135, 62, 156, 228, 116, 60, 86, 65, 90, 189, 117, 194, 91, 190, 90, 231, 53, 62, 231, 206, 196, 188, 159, 233, 252, 61, 217, 199, 96, 62, 205, 84, 29, 190, 122, 108, 51, 190, 167, 253, 33, 62};
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
                alignas(float) const unsigned char memory[] = {18, 95, 170, 62, 240, 217, 41, 190, 203, 12, 84, 190, 143, 87, 25, 63, 69, 206, 3, 63, 42, 231, 96, 60, 130, 3, 10, 191, 169, 212, 228, 62, 91, 14, 218, 60, 249, 28, 209, 62, 196, 89, 0, 190, 128, 141, 91, 188, 67, 121, 191, 190, 40, 191, 29, 63, 150, 112, 6, 190, 180, 158, 65, 60, 75, 135, 244, 189, 204, 20, 138, 190, 10, 56, 21, 190, 178, 1, 138, 63, 0, 105, 207, 61, 200, 61, 42, 63, 250, 62, 245, 62, 176, 53, 173, 62, 223, 87, 62, 190, 22, 252, 186, 190, 196, 96, 223, 62, 30, 192, 173, 190, 114, 1, 154, 63, 239, 2, 220, 187, 220, 147, 25, 190, 153, 11, 143, 62, 201, 16, 77, 62, 72, 178, 7, 190, 176, 190, 36, 190, 94, 131, 41, 62, 187, 158, 167, 60, 155, 196, 160, 190, 34, 237, 18, 62, 123, 212, 244, 60, 5, 172, 22, 62, 39, 30, 224, 61, 252, 85, 141, 190, 107, 170, 233, 190, 124, 221, 117, 61, 173, 250, 21, 62, 171, 226, 206, 189, 75, 127, 189, 190, 216, 14, 7, 61, 15, 212, 86, 62, 180, 234, 109, 190, 43, 249, 169, 187, 134, 253, 177, 61, 121, 61, 122, 62, 221, 232, 44, 62, 145, 238, 179, 62, 128, 203, 191, 188, 91, 87, 84, 189, 32, 250, 145, 190, 46, 123, 111, 61, 41, 165, 158, 61, 200, 37, 178, 189, 200, 55, 228, 189, 128, 239, 2, 62};
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
                alignas(float) const unsigned char memory[] = {213, 222, 103, 190, 52, 242, 136, 190};
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
    alignas(float) const unsigned char memory[] = {169, 171, 60, 63, 173, 196, 213, 190, 24, 236, 225, 63};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 3, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

// NOTE: This code export assumes that the endianness of the target platform is the same as the endianness of the source platform
#include <rl_tools/containers.h>
namespace rl_tools::checkpoint::example::output {
    static_assert(sizeof(unsigned char) == 1);
    alignas(float) const unsigned char memory[] = {110, 20, 133, 63, 78, 15, 193, 191};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 2, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

namespace rl_tools::checkpoint::meta{
   char name[] = "experiments/2024-05-27_19-39-12/b738cd1_zoo_algorithm_environment/sac_pendulum-v1/0084/steps/000000000012000";
   char commit_hash[] = "b738cd18dcbee2b66aa05c642653771cd0e46c8b";
}