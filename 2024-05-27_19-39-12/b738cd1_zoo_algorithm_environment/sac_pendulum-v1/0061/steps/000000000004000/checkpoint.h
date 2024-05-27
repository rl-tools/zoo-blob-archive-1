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
                alignas(float) const unsigned char memory[] = {6, 27, 29, 191, 228, 143, 22, 63, 243, 237, 233, 190, 32, 205, 0, 189, 7, 89, 29, 63, 152, 202, 30, 191, 240, 157, 19, 63, 77, 179, 21, 63, 100, 101, 6, 191, 165, 152, 40, 191, 24, 125, 121, 62, 145, 247, 159, 62, 171, 172, 118, 62, 242, 208, 36, 62, 232, 216, 213, 190, 134, 177, 254, 60, 244, 114, 221, 62, 90, 102, 207, 60, 113, 13, 180, 62, 103, 68, 19, 63, 25, 58, 7, 62, 234, 133, 125, 59, 32, 147, 192, 190, 207, 67, 169, 189, 241, 78, 76, 62, 1, 92, 149, 62, 53, 10, 245, 190, 126, 104, 116, 63, 97, 95, 177, 190, 172, 53, 75, 61, 236, 237, 50, 63, 93, 87, 18, 63, 83, 7, 162, 62, 245, 68, 134, 61, 190, 224, 208, 190, 238, 196, 243, 62, 230, 33, 128, 190, 9, 108, 146, 61, 176, 34, 201, 61, 39, 75, 217, 190, 160, 254, 10, 191, 134, 155, 201, 189, 117, 145, 25, 63, 244, 63, 81, 62, 48, 243, 75, 62, 151, 23, 139, 190, 203, 103, 100, 191, 129, 189, 187, 62, 86, 48, 233, 62, 226, 47, 144, 62, 130, 185, 62, 62, 61, 145, 27, 61, 92, 44, 37, 191, 214, 219, 1, 63, 105, 95, 230, 62, 95, 12, 55, 63, 207, 35, 165, 62, 159, 187, 238, 190, 32, 195, 134, 190, 58, 213, 254, 62, 144, 127, 207, 62, 174, 48, 41, 63, 245, 101, 192, 62, 138, 236, 132, 190, 39, 60, 8, 63, 215, 59, 40, 63, 219, 110, 249, 189, 191, 70, 133, 62, 76, 244, 27, 63, 8, 131, 229, 62, 188, 34, 187, 62, 84, 167, 172, 189, 36, 70, 173, 190, 242, 47, 244, 62, 12, 65, 42, 62, 242, 236, 12, 191, 247, 190, 169, 62, 245, 42, 85, 191, 208, 220, 129, 61, 182, 245, 47, 190, 100, 236, 1, 191, 159, 213, 19, 63, 228, 119, 90, 191, 78, 123, 166, 190, 134, 85, 170, 190, 249, 152, 24, 63, 194, 180, 48, 191, 195, 112, 236, 190, 201, 237, 79, 191, 49, 18, 64, 190, 72, 218, 32, 191, 88, 154, 55, 190, 14, 35, 247, 61, 188, 127, 7, 191, 35, 44, 10, 190, 11, 120, 16, 63};
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
                alignas(float) const unsigned char memory[] = {113, 2, 10, 191, 229, 138, 43, 191, 248, 246, 157, 188, 193, 148, 25, 61, 25, 141, 150, 190, 149, 201, 4, 63, 85, 174, 148, 188, 146, 74, 16, 63, 75, 223, 129, 190, 218, 238, 206, 188, 130, 84, 41, 61, 156, 245, 146, 189, 138, 194, 40, 63, 209, 240, 21, 63, 41, 201, 17, 191, 95, 97, 158, 190, 89, 237, 212, 190, 81, 73, 35, 62, 97, 139, 224, 190, 128, 113, 131, 190, 155, 22, 246, 189, 164, 109, 206, 62, 252, 80, 7, 63, 239, 215, 2, 63, 202, 97, 64, 62, 176, 137, 94, 190, 105, 103, 85, 62, 4, 31, 90, 190, 76, 156, 68, 190, 111, 149, 77, 63, 159, 245, 88, 61, 232, 105, 47, 189};
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
                alignas(float) const unsigned char memory[] = {180, 108, 157, 190, 78, 76, 131, 62, 237, 189, 69, 62, 19, 58, 254, 60, 190, 110, 244, 187, 16, 178, 171, 62, 6, 78, 223, 190, 28, 183, 56, 62, 166, 161, 211, 61, 19, 50, 222, 62, 83, 193, 77, 190, 65, 129, 92, 189, 22, 165, 51, 189, 48, 157, 183, 189, 84, 56, 210, 190, 123, 50, 162, 60, 46, 212, 237, 190, 140, 4, 78, 62, 71, 169, 205, 190, 181, 20, 221, 61, 253, 218, 141, 190, 38, 1, 36, 62, 200, 197, 205, 61, 153, 158, 214, 62, 140, 232, 162, 60, 203, 149, 28, 190, 239, 190, 63, 190, 65, 112, 170, 62, 82, 67, 139, 190, 125, 53, 158, 189, 252, 217, 38, 62, 84, 28, 152, 60, 195, 49, 133, 190, 30, 220, 56, 62, 82, 200, 192, 62, 89, 72, 87, 189, 61, 135, 238, 60, 110, 183, 55, 62, 87, 119, 146, 62, 107, 41, 195, 189, 94, 127, 150, 61, 113, 217, 59, 190, 67, 23, 120, 62, 153, 157, 133, 190, 194, 42, 121, 189, 35, 35, 205, 190, 103, 40, 186, 189, 70, 231, 73, 190, 129, 81, 28, 190, 89, 38, 151, 190, 215, 252, 241, 189, 80, 239, 133, 190, 38, 210, 184, 189, 87, 121, 25, 189, 46, 5, 220, 189, 226, 197, 213, 61, 221, 111, 185, 190, 43, 46, 190, 189, 239, 109, 138, 61, 15, 238, 211, 190, 213, 251, 31, 190, 117, 236, 179, 190, 197, 196, 94, 190, 170, 148, 255, 189, 69, 166, 40, 189, 253, 176, 225, 62, 68, 155, 82, 62, 42, 232, 175, 189, 87, 225, 17, 189, 158, 44, 54, 62, 234, 45, 180, 62, 48, 44, 190, 190, 85, 165, 5, 62, 78, 27, 195, 189, 137, 200, 180, 62, 211, 130, 7, 189, 10, 135, 44, 62, 226, 245, 184, 190, 129, 27, 3, 62, 218, 78, 149, 61, 117, 26, 204, 60, 114, 96, 158, 189, 61, 58, 16, 188, 165, 34, 247, 61, 101, 249, 206, 61, 52, 61, 188, 61, 252, 30, 28, 62, 78, 112, 168, 62, 27, 54, 180, 189, 224, 123, 4, 185, 131, 129, 117, 61, 251, 215, 153, 190, 60, 123, 181, 190, 50, 84, 66, 191, 246, 29, 157, 189, 252, 32, 17, 189, 173, 253, 84, 189, 243, 117, 199, 61, 147, 50, 72, 61, 189, 221, 230, 189, 54, 125, 124, 61, 223, 14, 81, 61, 226, 72, 28, 62, 217, 182, 135, 189, 105, 180, 134, 189, 193, 32, 87, 61, 129, 181, 244, 60, 94, 8, 20, 62, 89, 226, 104, 61, 99, 217, 184, 189, 88, 77, 48, 62, 112, 145, 48, 190, 157, 115, 74, 61, 246, 174, 11, 190, 0, 49, 33, 62, 96, 255, 7, 60, 179, 42, 20, 190, 116, 73, 207, 189, 171, 169, 39, 190, 29, 92, 37, 190, 254, 63, 34, 62, 216, 85, 42, 190, 212, 92, 162, 61, 91, 38, 245, 61, 157, 62, 168, 189, 247, 52, 254, 189, 18, 208, 163, 61, 34, 159, 1, 62, 204, 111, 42, 61, 57, 129, 73, 61, 194, 20, 97, 190, 63, 50, 196, 188, 95, 88, 20, 190, 202, 169, 169, 188, 252, 154, 137, 60, 181, 211, 201, 188, 39, 8, 47, 190, 38, 57, 77, 59, 206, 152, 38, 62, 182, 143, 216, 189, 33, 168, 28, 62, 232, 20, 133, 62, 11, 39, 22, 189, 45, 82, 40, 190, 29, 94, 227, 189, 47, 215, 199, 189, 71, 133, 79, 189, 247, 168, 91, 190, 203, 151, 199, 61, 250, 217, 246, 61, 37, 235, 43, 62, 184, 198, 224, 61, 60, 220, 161, 61, 219, 74, 74, 61, 175, 172, 23, 62, 185, 107, 18, 190, 78, 119, 85, 62, 210, 66, 233, 187, 68, 160, 69, 62, 193, 112, 204, 189, 61, 170, 45, 188, 101, 191, 161, 189, 238, 45, 186, 60, 78, 220, 182, 189, 209, 161, 16, 190, 46, 177, 229, 189, 152, 217, 1, 190, 156, 156, 167, 60, 200, 218, 170, 188, 35, 220, 182, 189, 35, 156, 7, 188, 115, 107, 30, 190, 159, 20, 81, 190, 49, 33, 64, 61, 4, 81, 54, 189, 195, 108, 159, 189, 20, 190, 159, 189, 95, 239, 2, 188, 251, 67, 116, 189, 230, 187, 70, 189, 36, 167, 217, 188, 66, 92, 18, 188, 30, 201, 177, 61, 76, 217, 74, 190, 190, 151, 47, 190, 191, 109, 152, 189, 158, 96, 55, 189, 88, 20, 245, 188, 84, 191, 201, 61, 113, 192, 25, 188, 229, 123, 190, 189, 204, 207, 55, 61, 49, 255, 77, 62, 10, 122, 207, 190, 130, 115, 134, 189, 174, 190, 96, 190, 172, 225, 184, 61, 101, 85, 141, 188, 226, 55, 200, 62, 218, 112, 171, 61, 36, 226, 188, 190, 17, 162, 135, 189, 242, 194, 132, 62, 234, 120, 108, 62, 165, 71, 246, 61, 80, 99, 152, 61, 189, 78, 60, 62, 94, 56, 95, 62, 58, 149, 237, 189, 73, 253, 59, 61, 105, 214, 137, 61, 96, 57, 116, 189, 130, 178, 208, 60, 150, 170, 192, 61, 213, 15, 209, 188, 146, 22, 12, 62, 199, 86, 141, 190, 43, 138, 151, 62, 188, 66, 132, 61, 152, 202, 2, 191, 190, 27, 174, 61, 30, 243, 130, 59, 159, 24, 55, 189, 68, 122, 225, 188, 4, 143, 252, 188, 44, 145, 26, 62, 243, 167, 52, 190, 63, 8, 4, 62, 249, 128, 2, 62, 159, 48, 19, 62, 184, 237, 45, 60, 110, 99, 0, 190, 130, 168, 146, 189, 75, 75, 123, 189, 222, 89, 42, 190, 186, 61, 176, 189, 42, 29, 104, 61, 24, 111, 61, 189, 218, 221, 40, 62, 82, 152, 239, 61, 233, 119, 11, 62, 108, 26, 27, 190, 209, 39, 13, 190, 172, 138, 25, 61, 135, 137, 16, 188, 251, 48, 5, 190, 129, 148, 118, 189, 211, 104, 173, 61, 231, 198, 35, 61, 115, 17, 171, 189, 91, 153, 168, 61, 18, 172, 36, 62, 230, 210, 12, 190, 208, 83, 51, 190, 142, 203, 131, 60, 23, 21, 149, 189, 170, 20, 120, 189, 183, 165, 211, 189, 55, 229, 17, 190, 87, 139, 248, 189, 45, 0, 133, 61, 130, 201, 254, 189, 184, 59, 105, 189, 117, 219, 12, 62, 124, 241, 237, 61, 183, 28, 170, 61, 212, 111, 41, 62, 99, 225, 107, 188, 55, 66, 228, 188, 151, 82, 28, 61, 79, 91, 81, 190, 232, 211, 27, 61, 127, 250, 7, 190, 30, 93, 87, 61, 118, 98, 28, 189, 30, 88, 88, 189, 199, 213, 15, 190, 175, 79, 170, 61, 142, 102, 155, 187, 52, 135, 195, 189, 119, 248, 29, 62, 62, 238, 233, 61, 132, 70, 63, 189, 209, 104, 18, 190, 41, 214, 213, 60, 94, 203, 86, 189, 97, 137, 178, 189, 39, 20, 172, 61, 176, 1, 203, 61, 212, 12, 142, 60, 79, 46, 62, 190, 211, 166, 144, 61, 41, 25, 16, 190, 90, 210, 84, 189, 21, 145, 7, 189, 109, 125, 213, 189, 178, 138, 181, 187, 148, 158, 22, 190, 141, 171, 62, 190, 73, 190, 234, 61, 131, 171, 168, 189, 194, 91, 129, 189, 1, 67, 92, 61, 206, 134, 5, 62, 103, 18, 33, 190, 210, 188, 187, 189, 32, 44, 19, 190, 101, 156, 179, 60, 128, 43, 189, 189, 59, 46, 185, 60, 132, 38, 133, 61, 104, 109, 73, 190, 155, 39, 62, 187, 51, 34, 13, 62, 152, 130, 182, 189, 202, 252, 42, 190, 169, 173, 180, 189, 220, 248, 44, 62, 15, 143, 145, 189, 82, 66, 58, 190, 116, 171, 239, 188, 21, 3, 72, 189, 255, 234, 67, 62, 60, 10, 182, 189, 77, 70, 0, 190, 241, 232, 102, 189, 165, 9, 210, 60, 95, 163, 75, 190, 14, 233, 40, 61, 179, 64, 155, 59, 138, 86, 154, 62, 84, 138, 193, 189, 120, 0, 45, 62, 26, 182, 117, 190, 150, 206, 193, 61, 163, 149, 186, 189, 233, 11, 146, 188, 155, 251, 186, 189, 134, 222, 169, 60, 252, 238, 172, 189, 111, 8, 74, 62, 125, 146, 195, 61, 88, 98, 28, 187, 175, 35, 193, 62, 179, 47, 19, 62, 133, 167, 153, 187, 55, 121, 8, 61, 16, 139, 113, 188, 7, 74, 116, 189, 222, 252, 233, 190, 160, 225, 166, 61, 250, 151, 80, 62, 234, 100, 130, 62, 168, 243, 227, 190, 133, 197, 112, 189, 196, 219, 73, 190, 79, 8, 17, 190, 175, 124, 17, 62, 175, 171, 245, 62, 229, 114, 6, 62, 175, 190, 191, 190, 59, 8, 27, 189, 161, 175, 187, 62, 111, 95, 147, 61, 1, 81, 24, 61, 217, 229, 141, 59, 12, 216, 145, 189, 98, 111, 73, 62, 240, 168, 57, 62, 211, 173, 109, 190, 110, 161, 21, 62, 213, 190, 29, 189, 92, 80, 161, 188, 171, 202, 197, 189, 62, 33, 156, 188, 42, 27, 90, 62, 35, 171, 225, 187, 54, 10, 173, 62, 234, 228, 44, 62, 114, 46, 17, 191, 134, 215, 59, 62, 190, 55, 98, 189, 234, 193, 226, 61, 185, 236, 138, 190, 57, 19, 64, 62, 210, 235, 245, 189, 195, 134, 97, 190, 227, 34, 42, 189, 67, 142, 140, 190, 160, 175, 60, 62, 164, 182, 104, 62, 250, 118, 45, 61, 114, 29, 181, 190, 44, 78, 146, 62, 96, 207, 102, 62, 164, 167, 248, 189, 145, 2, 124, 62, 21, 176, 85, 62, 62, 153, 220, 61, 72, 44, 203, 60, 105, 207, 208, 189, 8, 32, 1, 191, 149, 33, 30, 61, 14, 35, 38, 191, 137, 73, 62, 189, 14, 165, 2, 191, 77, 157, 102, 190, 189, 41, 248, 61, 165, 174, 161, 190, 75, 194, 100, 62, 155, 223, 117, 189, 97, 242, 8, 191, 199, 255, 133, 62, 168, 127, 27, 62, 225, 236, 34, 62, 9, 185, 161, 190, 13, 193, 92, 62, 166, 12, 1, 62, 57, 199, 77, 190, 159, 221, 244, 189, 146, 88, 225, 189, 71, 96, 148, 61, 33, 2, 31, 190, 31, 167, 16, 188, 175, 41, 81, 61, 73, 142, 24, 188, 114, 27, 9, 189, 169, 156, 101, 60, 7, 197, 237, 189, 79, 58, 25, 189, 176, 107, 93, 189, 23, 132, 80, 61, 59, 238, 44, 190, 232, 32, 81, 189, 119, 74, 180, 188, 177, 65, 160, 189, 57, 114, 220, 57, 103, 8, 4, 190, 198, 156, 85, 189, 124, 86, 93, 190, 69, 69, 36, 61, 30, 76, 152, 61, 230, 216, 161, 61, 95, 218, 19, 189, 79, 62, 193, 188, 15, 41, 247, 61, 186, 219, 40, 61, 200, 56, 86, 189, 129, 90, 152, 190, 135, 60, 72, 61, 77, 177, 152, 62, 131, 39, 226, 188, 193, 226, 93, 62, 47, 205, 187, 188, 192, 149, 158, 190, 194, 138, 237, 61, 30, 26, 17, 62, 65, 18, 21, 63, 78, 133, 7, 190, 99, 60, 186, 189, 180, 162, 91, 61, 199, 208, 63, 61, 197, 184, 193, 190, 47, 198, 3, 190, 206, 76, 158, 190, 48, 114, 50, 62, 224, 145, 104, 190, 247, 66, 41, 61, 21, 248, 234, 189, 6, 210, 2, 62, 182, 171, 172, 188, 33, 11, 250, 61, 237, 154, 173, 60, 242, 208, 93, 190, 68, 61, 212, 59, 172, 85, 191, 61, 217, 225, 157, 190, 61, 4, 167, 189, 254, 113, 191, 61, 38, 253, 215, 61, 34, 251, 87, 61, 94, 113, 243, 60, 29, 53, 23, 189, 27, 112, 5, 188, 105, 91, 127, 190, 233, 128, 169, 189, 35, 47, 226, 61, 84, 1, 232, 188, 84, 123, 152, 189, 165, 177, 193, 190, 106, 239, 144, 188, 140, 18, 0, 62, 18, 181, 140, 61, 132, 52, 245, 61, 20, 250, 51, 189, 34, 46, 21, 190, 119, 168, 54, 62, 19, 207, 102, 189, 183, 146, 4, 190, 194, 243, 40, 189, 255, 146, 46, 62, 33, 176, 186, 189, 84, 78, 140, 189, 178, 146, 39, 61, 227, 183, 161, 61, 180, 145, 235, 61, 200, 57, 196, 61, 151, 212, 22, 189, 116, 40, 148, 61, 141, 236, 106, 60, 162, 223, 187, 61, 232, 48, 142, 61, 200, 167, 206, 190, 243, 75, 102, 62, 172, 5, 206, 60, 217, 31, 188, 189, 87, 198, 60, 62, 119, 110, 8, 62, 46, 107, 187, 190, 242, 134, 218, 187, 133, 154, 180, 62, 146, 108, 237, 62, 92, 45, 58, 190, 3, 254, 230, 189, 217, 44, 58, 61, 32, 128, 52, 190, 230, 155, 87, 60, 46, 122, 230, 60, 121, 156, 21, 190, 20, 121, 136, 62, 249, 208, 175, 188, 213, 49, 134, 62, 141, 236, 106, 190, 54, 63, 109, 189, 146, 52, 14, 62, 43, 242, 1, 62, 125, 77, 55, 189, 240, 240, 29, 190, 212, 152, 101, 61, 246, 194, 158, 62, 122, 76, 82, 190, 66, 245, 50, 62, 3, 111, 255, 188, 216, 58, 83, 62, 127, 245, 148, 190, 70, 128, 120, 190, 251, 246, 67, 188, 5, 185, 162, 61, 86, 106, 121, 60, 230, 190, 69, 62, 58, 32, 197, 190, 210, 246, 180, 60, 106, 187, 67, 190, 17, 117, 223, 61, 47, 187, 230, 60, 125, 140, 6, 190, 254, 214, 237, 61, 226, 58, 46, 61, 55, 46, 254, 188, 223, 36, 0, 190, 6, 72, 163, 189, 153, 23, 53, 190, 132, 143, 48, 190, 10, 245, 38, 62, 188, 43, 110, 190, 42, 234, 248, 188, 25, 94, 13, 62, 185, 170, 109, 190, 91, 32, 46, 189, 192, 166, 121, 190, 137, 47, 52, 191, 130, 82, 99, 191, 98, 153, 240, 190, 248, 203, 138, 62, 95, 26, 84, 62, 156, 56, 13, 62, 218, 109, 241, 61, 197, 219, 89, 190, 61, 217, 33, 190, 118, 192, 12, 190, 89, 116, 74, 189, 73, 173, 250, 61, 219, 183, 155, 61, 164, 211, 124, 189, 206, 78, 109, 190, 82, 58, 64, 189, 167, 30, 205, 61, 31, 14, 243, 61, 222, 186, 41, 62, 164, 200, 39, 189, 9, 101, 10, 60, 57, 9, 207, 61, 47, 15, 125, 190, 8, 59, 58, 188, 130, 8, 30, 190, 87, 33, 61, 190, 200, 241, 129, 62, 12, 111, 137, 60, 61, 226, 233, 189, 221, 228, 189, 62, 22, 214, 130, 59, 194, 250, 151, 62, 8, 110, 230, 61, 80, 109, 207, 190, 43, 8, 164, 61, 20, 168, 25, 190, 34, 14, 156, 189, 47, 236, 9, 190, 195, 208, 139, 189, 38, 1, 102, 60, 78, 211, 145, 61, 87, 249, 1, 188, 1, 146, 78, 190, 23, 67, 7, 61, 116, 163, 197, 188, 20, 149, 210, 189, 249, 252, 172, 189, 231, 98, 126, 189, 112, 100, 69, 189, 135, 67, 12, 62, 236, 127, 27, 62, 52, 82, 106, 60, 146, 122, 16, 189, 63, 145, 150, 188, 160, 199, 29, 190, 166, 192, 227, 187, 36, 91, 36, 190, 151, 226, 122, 189, 8, 143, 162, 60, 142, 162, 216, 188, 102, 211, 152, 61, 135, 20, 189, 61, 45, 227, 58, 190, 5, 21, 239, 61, 92, 84, 199, 188, 125, 6, 206, 189, 157, 239, 68, 190, 58, 172, 60, 61, 182, 11, 163, 61, 73, 151, 197, 189, 88, 13, 26, 62, 169, 220, 147, 190, 222, 137, 129, 189, 103, 131, 183, 59, 195, 233, 184, 59, 99, 49, 171, 189, 76, 18, 204, 62, 218, 63, 186, 61, 201, 173, 15, 190, 174, 203, 136, 189, 213, 9, 145, 62, 167, 178, 9, 62, 0, 249, 143, 61, 220, 108, 185, 188, 13, 223, 61, 190, 117, 57, 48, 62, 22, 166, 41, 190, 130, 21, 2, 190, 74, 153, 200, 189, 140, 21, 221, 187, 49, 69, 81, 188, 116, 139, 54, 190, 163, 52, 44, 62, 220, 56, 28, 62, 16, 199, 21, 186, 129, 241, 133, 62, 36, 197, 206, 61, 225, 135, 7, 191, 123, 193, 236, 61, 55, 140, 121, 189, 149, 43, 247, 61, 28, 250, 39, 190, 130, 231, 72, 189, 222, 165, 60, 61, 154, 246, 216, 61, 108, 99, 164, 61, 246, 188, 56, 62, 37, 249, 102, 61, 42, 14, 71, 62, 94, 136, 205, 189, 193, 16, 19, 189, 163, 239, 14, 189, 195, 170, 33, 61, 147, 43, 98, 61, 171, 52, 187, 189, 25, 233, 141, 190, 231, 233, 125, 189, 28, 42, 0, 189, 141, 131, 129, 62, 248, 0, 156, 60, 178, 50, 248, 61, 163, 228, 101, 61, 70, 185, 108, 62, 59, 42, 53, 61, 23, 244, 23, 62, 57, 224, 130, 189, 182, 207, 170, 189, 253, 187, 123, 59, 22, 131, 39, 62, 172, 215, 52, 62, 13, 97, 133, 189, 219, 69, 103, 188, 188, 215, 57, 190, 194, 29, 248, 189, 220, 10, 117, 62, 163, 94, 127, 189, 4, 26, 165, 190, 100, 205, 113, 61, 115, 207, 218, 60, 252, 109, 71, 62, 138, 81, 201, 62, 209, 10, 120, 61, 236, 81, 204, 190, 109, 25, 7, 62, 213, 191, 208, 62, 53, 104, 201, 189, 144, 225, 90, 61, 254, 199, 66, 62, 227, 35, 194, 61, 31, 46, 195, 61, 163, 9, 133, 189, 195, 231, 11, 191, 174, 170, 184, 188, 166, 120, 251, 190, 44, 11, 140, 62, 19, 15, 146, 190, 223, 72, 131, 190, 123, 59, 101, 62, 78, 228, 215, 61, 124, 10, 136, 62, 55, 145, 250, 189, 6, 148, 200, 190, 50, 61, 167, 61, 160, 206, 94, 61, 5, 223, 53, 62, 26, 143, 130, 190, 244, 61, 225, 188, 10, 210, 137, 59, 145, 69, 68, 190, 199, 199, 6, 190, 48, 119, 15, 189, 242, 161, 126, 61, 134, 190, 33, 60, 198, 2, 137, 189, 199, 13, 160, 61, 52, 100, 171, 188, 14, 98, 138, 189, 239, 211, 49, 190, 196, 36, 168, 189, 13, 88, 73, 62, 28, 106, 67, 190, 176, 207, 92, 62, 37, 254, 27, 190, 37, 59, 20, 189, 59, 170, 17, 62, 132, 36, 77, 189, 105, 158, 252, 61, 0, 76, 62, 190, 73, 45, 248, 189, 153, 176, 131, 190, 182, 231, 28, 60, 117, 11, 248, 189, 205, 124, 194, 60, 150, 74, 58, 189, 29, 131, 51, 190, 43, 207, 44, 62, 229, 251, 29, 62, 100, 56, 191, 189, 217, 255, 131, 61, 217, 205, 15, 190, 3, 250, 235, 188, 91, 231, 41, 62, 25, 150, 230, 189, 41, 42, 42, 62, 238, 87, 165, 187, 170, 201, 68, 190, 107, 28, 69, 61, 43, 15, 32, 61, 211, 207, 249, 61, 38, 49, 0, 62, 7, 129, 156, 61, 90, 234, 6, 190, 236, 16, 184, 189, 57, 29, 126, 61, 15, 62, 90, 190, 108, 105, 43, 190, 16, 136, 3, 60, 136, 112, 108, 188, 245, 116, 4, 190, 102, 124, 54, 61, 42, 97, 172, 189, 91, 146, 138, 189, 25, 29, 92, 189, 115, 83, 134, 189, 3, 101, 37, 190, 216, 253, 54, 60, 49, 111, 153, 61, 15, 76, 58, 190, 255, 41, 211, 61, 213, 84, 28, 62, 155, 138, 6, 191, 74, 160, 213, 60, 72, 166, 159, 62, 164, 2, 110, 62, 171, 16, 219, 61, 62, 65, 4, 62, 247, 84, 23, 191, 246, 128, 162, 61, 246, 23, 64, 62, 21, 26, 9, 63, 97, 53, 197, 190, 5, 205, 4, 187, 19, 60, 10, 62, 197, 37, 16, 190, 30, 239, 195, 190, 173, 212, 156, 190, 49, 63, 28, 190, 192, 96, 190, 60, 228, 80, 160, 190, 246, 101, 200, 61, 56, 28, 87, 190, 17, 179, 49, 62, 15, 194, 250, 61, 225, 224, 166, 62, 161, 42, 20, 189, 45, 180, 154, 189, 94, 242, 177, 61, 170, 17, 60, 62, 243, 78, 154, 190, 136, 255, 14, 190, 151, 94, 60, 62, 67, 35, 180, 60, 47, 160, 4, 190, 168, 185, 58, 190, 126, 207, 75, 190, 210, 6, 141, 61, 83, 78, 193, 61, 242, 238, 102, 61, 25, 242, 0, 62, 161, 242, 129, 190, 157, 183, 34, 190, 66, 196, 53, 58, 154, 86, 201, 61, 0, 195, 58, 190, 88, 2, 68, 190, 215, 16, 164, 190, 179, 55, 71, 62, 165, 41, 22, 61, 231, 153, 129, 59, 51, 52, 168, 61, 120, 9, 89, 189, 198, 203, 78, 190, 111, 36, 56, 62, 209, 63, 149, 189, 2, 223, 172, 60, 75, 54, 26, 62, 40, 66, 120, 61, 93, 125, 7, 190, 143, 174, 129, 190, 2, 4, 164, 189, 39, 18, 77, 190, 144, 158, 171, 190, 166, 61, 138, 61, 223, 255, 240, 61, 122, 55, 185, 190, 189, 224, 59, 60, 137, 11, 228, 62, 87, 211, 251, 189, 19, 236, 154, 62, 158, 8, 224, 189, 192, 183, 176, 190, 166, 106, 219, 61, 28, 178, 49, 62, 43, 156, 180, 62, 178, 58, 124, 190, 237, 122, 208, 59, 36, 114, 85, 61, 156, 22, 241, 187, 235, 171, 48, 190, 42, 46, 37, 189, 12, 138, 197, 190, 171, 95, 219, 61, 234, 51, 163, 190, 178, 121, 85, 189, 157, 175, 100, 190, 49, 161, 35, 62, 153, 131, 141, 61, 197, 58, 115, 62, 5, 98, 45, 62, 121, 53, 168, 189, 18, 138, 91, 61, 125, 153, 72, 62, 206, 223, 168, 190, 196, 54, 185, 59, 27, 152, 28, 62, 8, 243, 105, 61, 206, 131, 202, 188, 190, 183, 1, 189, 197, 19, 161, 58, 226, 2, 8, 190, 178, 157, 218, 58, 160, 160, 193, 61, 182, 213, 202, 60, 214, 131, 234, 187, 144, 33, 49, 190, 113, 23, 7, 190, 209, 104, 11, 190, 148, 0, 111, 61, 93, 122, 98, 189, 13, 239, 22, 61, 101, 202, 102, 189, 125, 55, 49, 62, 58, 190, 33, 188, 199, 190, 209, 189, 147, 71, 44, 62, 100, 168, 164, 189, 214, 46, 34, 60, 99, 205, 27, 190, 183, 19, 106, 61, 54, 32, 242, 189, 28, 177, 230, 189, 157, 234, 156, 188, 242, 196, 12, 61, 32, 78, 65, 189, 151, 178, 193, 59, 193, 110, 58, 61, 236, 93, 22, 189, 202, 99, 98, 189, 219, 158, 67, 191, 17, 100, 15, 60, 202, 179, 160, 62, 91, 60, 85, 62, 222, 77, 48, 61, 208, 48, 167, 188, 85, 95, 171, 190, 155, 141, 39, 62, 243, 204, 142, 61, 238, 253, 4, 63, 44, 225, 53, 190, 22, 175, 158, 190, 181, 16, 141, 189, 52, 19, 148, 61, 128, 53, 239, 189, 157, 225, 206, 190, 197, 213, 111, 190, 11, 156, 32, 62, 38, 29, 194, 190, 52, 40, 41, 62, 36, 107, 12, 191, 128, 95, 179, 61, 0, 5, 101, 62, 190, 83, 137, 189, 249, 172, 148, 61, 37, 149, 4, 191, 225, 72, 5, 190, 209, 253, 6, 63, 123, 50, 9, 191, 89, 255, 129, 62, 50, 117, 164, 187, 169, 57, 57, 62, 5, 29, 4, 61, 148, 229, 244, 61, 5, 64, 0, 190, 205, 7, 69, 62, 254, 108, 237, 189, 131, 23, 146, 61, 52, 125, 218, 60, 8, 129, 208, 61, 204, 202, 235, 59, 172, 99, 26, 189, 212, 47, 1, 190, 63, 40, 91, 61, 170, 154, 236, 189, 19, 219, 217, 189, 49, 189, 169, 189, 234, 204, 63, 190, 211, 153, 37, 190, 168, 238, 3, 190, 251, 203, 32, 190, 7, 212, 113, 189, 69, 121, 44, 190, 34, 142, 172, 61, 136, 76, 187, 61, 66, 251, 114, 61, 143, 218, 11, 62, 228, 249, 196, 189, 48, 175, 91, 189, 6, 249, 48, 190, 89, 168, 123, 61, 154, 168, 252, 60, 38, 40, 74, 189, 119, 49, 170, 189, 19, 145, 7, 62, 16, 180, 64, 190, 243, 222, 19, 190, 42, 23, 195, 189, 108, 222, 154, 189, 242, 202, 2, 62, 159, 202, 156, 188, 135, 93, 91, 190, 42, 120, 62, 190, 11, 163, 5, 190, 183, 156, 1, 62, 38, 70, 53, 61, 168, 227, 164, 61, 59, 243, 115, 190, 89, 158, 75, 62, 245, 255, 45, 60, 170, 75, 3, 62, 32, 176, 203, 61, 212, 100, 79, 62, 180, 195, 72, 190, 217, 205, 55, 62, 38, 156, 26, 190, 59, 203, 89, 60, 84, 54, 78, 62, 240, 14, 53, 62, 29, 143, 205, 61, 234, 117, 136, 61, 230, 118, 109, 189, 2, 135, 202, 61, 7, 194, 72, 190, 103, 150, 77, 190, 157, 57, 30, 61};
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
                alignas(float) const unsigned char memory[] = {151, 60, 212, 61, 255, 85, 17, 61, 145, 231, 11, 62, 49, 32, 161, 189, 176, 234, 191, 62, 184, 41, 203, 61, 203, 53, 166, 61, 35, 219, 248, 188, 15, 117, 30, 190, 120, 89, 222, 189, 26, 59, 35, 62, 227, 116, 57, 62, 235, 250, 142, 62, 40, 58, 0, 190, 16, 15, 157, 62, 96, 63, 43, 190, 34, 191, 234, 188, 127, 219, 195, 189, 192, 210, 127, 62, 229, 31, 60, 190, 166, 226, 80, 62, 74, 129, 54, 190, 4, 104, 125, 61, 215, 92, 95, 62, 254, 0, 221, 189, 153, 187, 0, 62, 52, 140, 32, 61, 222, 177, 126, 189, 237, 150, 254, 189, 165, 200, 236, 61, 130, 224, 246, 60, 47, 165, 155, 189};
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
                alignas(float) const unsigned char memory[] = {65, 206, 109, 62, 190, 235, 213, 190, 44, 182, 201, 190, 57, 202, 162, 61, 197, 186, 18, 189, 137, 62, 150, 189, 21, 124, 46, 190, 224, 185, 37, 190, 246, 26, 155, 61, 131, 119, 218, 189, 79, 171, 143, 189, 97, 120, 211, 190, 7, 172, 17, 191, 122, 137, 215, 61, 208, 100, 93, 62, 180, 238, 29, 189, 222, 2, 127, 62, 186, 3, 208, 62, 55, 213, 171, 190, 86, 194, 112, 61, 232, 87, 90, 190, 219, 11, 71, 189, 39, 117, 208, 190, 16, 149, 134, 190, 69, 151, 34, 189, 48, 198, 151, 62, 166, 220, 220, 61, 97, 226, 103, 62, 228, 83, 14, 189, 241, 191, 78, 63, 246, 138, 9, 62, 254, 209, 199, 59, 77, 78, 253, 189, 30, 53, 66, 190, 100, 41, 148, 188, 51, 253, 2, 190, 219, 139, 117, 190, 160, 62, 104, 61, 2, 205, 193, 60, 105, 198, 250, 61, 6, 209, 205, 188, 150, 156, 148, 61, 120, 252, 27, 190, 77, 37, 93, 61, 219, 117, 129, 189, 192, 193, 91, 189, 43, 201, 129, 190, 154, 90, 119, 60, 55, 94, 199, 187, 250, 56, 244, 61, 237, 89, 136, 190, 70, 212, 144, 60, 67, 84, 128, 190, 124, 133, 39, 62, 58, 13, 131, 62, 92, 154, 140, 61, 25, 40, 131, 189, 27, 133, 190, 189, 120, 239, 14, 62, 160, 48, 34, 61, 177, 37, 74, 189, 185, 196, 50, 61, 4, 56, 208, 61, 99, 134, 135, 62};
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
                alignas(float) const unsigned char memory[] = {144, 148, 53, 188, 17, 39, 13, 190};
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
    alignas(float) const unsigned char memory[] = {20, 114, 137, 62, 200, 134, 106, 63, 142, 117, 240, 62};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 3, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

// NOTE: This code export assumes that the endianness of the target platform is the same as the endianness of the source platform
#include <rl_tools/containers.h>
namespace rl_tools::checkpoint::example::output {
    static_assert(sizeof(unsigned char) == 1);
    alignas(float) const unsigned char memory[] = {69, 106, 0, 192, 164, 8, 48, 191};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 2, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

namespace rl_tools::checkpoint::meta{
   char name[] = "experiments/2024-05-27_19-39-12/b738cd1_zoo_algorithm_environment/sac_pendulum-v1/0061/steps/000000000004000";
   char commit_hash[] = "b738cd18dcbee2b66aa05c642653771cd0e46c8b";
}