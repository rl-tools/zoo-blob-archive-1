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
                alignas(float) const unsigned char memory[] = {114, 234, 79, 191, 177, 250, 151, 62, 15, 195, 20, 63, 52, 54, 218, 62, 252, 81, 159, 63, 199, 169, 149, 62, 60, 163, 167, 61, 150, 138, 184, 190, 234, 183, 213, 190, 100, 63, 68, 63, 119, 98, 47, 191, 212, 22, 36, 191, 12, 211, 36, 63, 223, 161, 4, 63, 75, 165, 147, 62, 160, 164, 120, 62, 208, 60, 193, 191, 111, 83, 210, 190, 73, 202, 21, 63, 104, 177, 133, 63, 164, 142, 175, 189, 53, 120, 79, 190, 8, 24, 7, 190, 181, 11, 166, 62, 231, 254, 13, 191, 15, 126, 92, 63, 98, 243, 162, 62, 232, 201, 89, 63, 106, 229, 54, 191, 226, 71, 31, 190, 179, 122, 150, 62, 234, 191, 60, 62, 226, 138, 236, 189, 33, 54, 96, 190, 157, 65, 145, 190, 16, 135, 237, 190, 139, 142, 14, 191, 36, 153, 102, 191, 64, 148, 106, 62, 98, 40, 163, 189, 116, 105, 59, 191, 159, 174, 206, 190, 168, 128, 205, 61, 209, 65, 157, 191, 26, 128, 153, 190, 111, 1, 38, 63, 242, 207, 212, 62, 204, 202, 24, 191, 133, 99, 25, 63, 77, 248, 92, 63, 144, 106, 132, 62, 132, 151, 13, 191, 240, 134, 66, 63, 22, 218, 232, 61, 207, 100, 204, 62, 48, 6, 57, 191, 190, 211, 183, 62, 15, 236, 10, 191, 119, 242, 140, 62, 159, 96, 8, 61, 236, 94, 6, 62, 64, 116, 230, 189, 20, 215, 158, 186, 82, 211, 72, 190, 166, 92, 116, 63, 0, 161, 90, 62, 3, 245, 222, 62, 31, 197, 173, 58, 77, 41, 0, 191, 102, 6, 181, 61, 145, 45, 37, 63, 181, 61, 18, 62, 204, 19, 194, 190, 165, 165, 77, 62, 217, 23, 147, 190, 17, 244, 20, 63, 171, 64, 38, 191, 28, 177, 234, 190, 68, 96, 46, 190, 217, 228, 184, 190, 237, 121, 227, 62, 159, 130, 248, 189, 13, 195, 12, 191, 255, 2, 141, 62, 23, 209, 67, 187, 146, 105, 132, 191, 198, 81, 170, 62, 15, 29, 105, 191, 114, 164, 190, 188, 220, 4, 0, 191, 119, 230, 235, 60, 74, 94, 135, 191, 185, 210, 93, 190, 68, 203, 5, 189, 60, 150, 79, 191, 49, 101, 206, 190};
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
                alignas(float) const unsigned char memory[] = {16, 83, 11, 191, 214, 50, 64, 190, 117, 223, 46, 60, 144, 244, 202, 61, 198, 184, 57, 191, 64, 137, 112, 190, 63, 145, 159, 62, 197, 122, 1, 190, 245, 127, 70, 190, 36, 231, 209, 62, 225, 255, 18, 63, 154, 198, 147, 190, 10, 130, 236, 189, 196, 226, 25, 191, 180, 249, 198, 190, 164, 217, 161, 62, 4, 206, 222, 62, 233, 244, 238, 62, 118, 224, 138, 62, 184, 203, 67, 63, 203, 171, 120, 190, 206, 134, 246, 62, 123, 243, 195, 61, 49, 121, 89, 62, 154, 76, 66, 191, 93, 72, 85, 61, 179, 18, 247, 190, 235, 207, 66, 190, 183, 154, 28, 190, 63, 47, 142, 62, 11, 35, 166, 190, 57, 212, 194, 190};
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
                alignas(float) const unsigned char memory[] = {192, 83, 16, 188, 181, 200, 74, 190, 82, 96, 3, 61, 206, 225, 121, 62, 151, 149, 33, 63, 116, 1, 10, 62, 30, 77, 129, 62, 132, 106, 16, 190, 233, 248, 209, 189, 203, 83, 65, 62, 179, 15, 251, 61, 176, 176, 60, 190, 223, 184, 222, 190, 60, 146, 180, 189, 147, 163, 70, 190, 25, 13, 194, 60, 185, 107, 229, 189, 122, 52, 15, 191, 188, 175, 134, 190, 144, 81, 241, 190, 98, 223, 205, 186, 29, 64, 22, 191, 203, 32, 163, 61, 55, 239, 52, 188, 97, 198, 168, 62, 211, 159, 108, 59, 87, 209, 56, 190, 175, 42, 127, 189, 169, 92, 30, 191, 97, 41, 34, 188, 55, 203, 139, 190, 108, 136, 139, 190, 156, 209, 19, 190, 108, 208, 165, 189, 226, 216, 1, 189, 135, 248, 201, 60, 76, 94, 179, 189, 135, 7, 27, 190, 216, 38, 135, 188, 190, 252, 5, 62, 76, 175, 252, 189, 22, 28, 198, 189, 113, 218, 178, 61, 152, 184, 207, 61, 82, 100, 38, 190, 12, 137, 33, 190, 67, 212, 100, 59, 31, 192, 8, 189, 160, 235, 251, 187, 52, 160, 145, 61, 94, 222, 97, 61, 208, 190, 230, 188, 83, 120, 188, 61, 105, 212, 255, 189, 242, 110, 101, 189, 164, 138, 199, 189, 131, 34, 192, 61, 150, 118, 214, 189, 26, 74, 173, 189, 3, 182, 236, 189, 120, 70, 32, 190, 190, 193, 50, 190, 24, 231, 40, 190, 107, 138, 40, 187, 118, 219, 33, 61, 250, 35, 97, 60, 113, 181, 252, 61, 13, 98, 225, 189, 61, 72, 3, 189, 191, 239, 78, 189, 210, 72, 69, 61, 23, 58, 8, 62, 16, 96, 211, 61, 202, 88, 236, 189, 114, 103, 170, 61, 211, 72, 214, 61, 49, 19, 239, 61, 11, 193, 110, 189, 194, 133, 240, 189, 210, 232, 20, 191, 197, 173, 162, 189, 133, 6, 99, 62, 250, 211, 123, 190, 6, 131, 160, 62, 101, 144, 238, 61, 156, 239, 254, 187, 147, 226, 38, 189, 144, 227, 34, 190, 159, 76, 118, 62, 241, 224, 35, 190, 81, 180, 77, 61, 136, 195, 117, 189, 9, 219, 65, 189, 52, 240, 133, 62, 69, 146, 174, 61, 168, 248, 70, 62, 222, 19, 51, 62, 96, 61, 71, 191, 103, 78, 251, 187, 149, 34, 207, 62, 228, 72, 44, 191, 136, 40, 20, 62, 165, 244, 213, 61, 204, 243, 123, 190, 97, 211, 77, 62, 255, 107, 203, 61, 34, 246, 231, 61, 96, 217, 29, 190, 246, 137, 23, 63, 226, 52, 225, 61, 90, 56, 10, 190, 55, 58, 46, 61, 163, 252, 167, 190, 69, 175, 2, 190, 30, 182, 38, 63, 94, 227, 164, 190, 38, 13, 215, 60, 198, 232, 186, 190, 240, 221, 58, 190, 228, 8, 221, 189, 202, 81, 136, 62, 108, 68, 232, 62, 187, 94, 176, 190, 236, 237, 196, 62, 181, 45, 184, 190, 204, 24, 163, 189, 140, 128, 80, 190, 153, 234, 38, 191, 85, 144, 149, 188, 85, 205, 189, 61, 119, 1, 197, 62, 10, 141, 115, 60, 125, 99, 225, 189, 54, 235, 5, 62, 195, 244, 14, 62, 55, 212, 53, 61, 0, 187, 103, 61, 140, 125, 187, 190, 45, 10, 123, 190, 139, 162, 142, 61, 237, 136, 65, 62, 72, 28, 177, 61, 112, 81, 84, 190, 18, 171, 107, 191, 95, 80, 119, 62, 132, 194, 1, 63, 18, 237, 96, 62, 56, 57, 68, 62, 133, 102, 33, 62, 73, 118, 34, 62, 143, 30, 234, 190, 128, 206, 80, 62, 136, 2, 58, 190, 142, 182, 176, 188, 65, 166, 140, 189, 253, 113, 165, 189, 162, 75, 73, 191, 68, 254, 251, 188, 90, 102, 96, 190, 125, 17, 175, 191, 163, 240, 199, 61, 12, 241, 211, 190, 100, 64, 134, 188, 237, 250, 161, 62, 167, 71, 79, 191, 137, 118, 35, 190, 93, 5, 218, 60, 163, 195, 205, 60, 117, 237, 132, 62, 117, 153, 5, 62, 42, 56, 4, 62, 54, 123, 92, 61, 167, 155, 14, 61, 234, 141, 243, 189, 118, 126, 38, 190, 74, 55, 35, 62, 250, 52, 207, 62, 57, 10, 74, 190, 251, 53, 28, 188, 120, 89, 196, 61, 13, 209, 41, 190, 130, 131, 27, 62, 194, 76, 28, 190, 76, 42, 36, 62, 102, 64, 103, 60, 218, 111, 21, 61, 178, 44, 151, 190, 20, 167, 166, 189, 185, 152, 17, 61, 234, 12, 249, 60, 154, 242, 178, 189, 59, 246, 132, 189, 119, 20, 2, 62, 239, 100, 25, 61, 31, 152, 39, 62, 63, 129, 30, 191, 16, 85, 43, 62, 178, 154, 80, 191, 135, 129, 230, 62, 127, 84, 30, 61, 227, 205, 197, 188, 175, 97, 129, 61, 225, 60, 111, 62, 19, 162, 111, 62, 51, 178, 245, 189, 23, 248, 35, 191, 52, 255, 231, 190, 249, 161, 133, 62, 153, 187, 140, 62, 150, 53, 254, 61, 232, 196, 183, 190, 66, 27, 23, 62, 241, 184, 28, 62, 12, 99, 4, 62, 114, 59, 144, 61, 25, 27, 255, 61, 186, 230, 222, 190, 188, 204, 6, 191, 240, 40, 219, 61, 69, 218, 147, 189, 240, 126, 9, 63, 161, 197, 9, 63, 53, 48, 158, 189, 17, 164, 204, 61, 180, 5, 31, 191, 173, 38, 25, 191, 100, 143, 66, 189, 6, 67, 137, 62, 184, 100, 209, 190, 141, 139, 10, 190, 116, 246, 82, 62, 245, 238, 181, 190, 159, 71, 186, 188, 228, 223, 20, 62, 48, 19, 101, 62, 213, 212, 174, 188, 143, 47, 182, 62, 115, 88, 42, 62, 79, 109, 228, 189, 63, 133, 238, 189, 185, 131, 10, 190, 88, 129, 129, 191, 215, 231, 2, 63, 196, 81, 128, 189, 92, 160, 170, 189, 104, 244, 72, 191, 219, 24, 213, 61, 174, 4, 128, 61, 14, 74, 130, 62, 27, 15, 35, 62, 132, 170, 243, 190, 111, 148, 249, 62, 144, 118, 197, 61, 43, 151, 70, 188, 79, 90, 134, 189, 116, 166, 123, 190, 39, 230, 54, 61, 116, 109, 82, 187, 247, 130, 57, 190, 232, 68, 14, 61, 191, 8, 10, 189, 230, 245, 246, 189, 99, 87, 187, 189, 179, 85, 253, 61, 238, 173, 152, 189, 162, 3, 245, 190, 27, 93, 243, 189, 72, 236, 146, 61, 114, 247, 37, 62, 197, 74, 167, 189, 147, 246, 228, 60, 244, 95, 190, 189, 91, 12, 229, 189, 147, 46, 176, 60, 100, 127, 25, 62, 121, 234, 48, 190, 233, 218, 34, 62, 246, 30, 135, 60, 70, 158, 41, 61, 188, 141, 83, 190, 28, 210, 99, 60, 101, 86, 208, 188, 65, 174, 44, 189, 106, 14, 252, 188, 169, 191, 228, 61, 239, 206, 143, 61, 244, 126, 2, 190, 186, 67, 5, 62, 52, 144, 41, 61, 146, 136, 32, 62, 182, 140, 243, 188, 136, 154, 196, 188, 144, 70, 50, 63, 105, 141, 58, 190, 251, 12, 201, 62, 124, 182, 140, 62, 140, 175, 34, 189, 196, 107, 148, 190, 186, 83, 170, 61, 14, 202, 120, 61, 167, 186, 118, 191, 158, 184, 39, 61, 194, 140, 188, 189, 96, 162, 138, 62, 72, 226, 157, 189, 186, 136, 139, 61, 80, 184, 218, 190, 50, 84, 72, 190, 64, 245, 165, 61, 108, 144, 168, 190, 42, 129, 123, 62, 130, 25, 183, 189, 165, 45, 192, 62, 109, 17, 21, 62, 179, 91, 49, 62, 202, 213, 41, 191, 49, 49, 106, 190, 8, 110, 14, 190, 97, 100, 5, 190, 103, 25, 72, 59, 59, 194, 6, 190, 60, 138, 70, 190, 45, 210, 120, 189, 203, 92, 105, 61, 145, 100, 133, 190, 128, 129, 124, 190, 159, 229, 194, 59, 38, 139, 111, 189, 238, 99, 185, 61, 78, 220, 142, 62, 9, 72, 62, 62, 91, 40, 234, 61, 218, 229, 180, 61, 79, 55, 129, 59, 23, 145, 112, 62, 66, 231, 49, 62, 225, 18, 171, 62, 98, 206, 11, 190, 221, 151, 119, 189, 39, 190, 141, 62, 83, 183, 11, 190, 122, 56, 144, 62, 230, 52, 197, 61, 237, 134, 154, 61, 193, 160, 51, 189, 104, 120, 72, 190, 218, 81, 18, 189, 229, 51, 95, 189, 168, 157, 145, 62, 192, 220, 248, 61, 174, 174, 189, 61, 119, 19, 162, 61, 22, 29, 234, 190, 35, 183, 19, 191, 62, 177, 35, 189, 251, 29, 89, 186, 65, 28, 184, 191, 252, 88, 145, 60, 116, 161, 19, 62, 6, 216, 127, 190, 165, 30, 216, 190, 219, 152, 15, 62, 26, 88, 190, 189, 7, 221, 54, 62, 14, 169, 150, 61, 61, 234, 148, 189, 238, 251, 252, 189, 251, 158, 14, 62, 220, 62, 163, 62, 236, 250, 97, 191, 102, 131, 169, 62, 131, 100, 106, 190, 32, 90, 229, 189, 22, 180, 182, 61, 92, 3, 5, 62, 87, 208, 72, 62, 119, 142, 181, 61, 60, 224, 203, 61, 226, 138, 188, 190, 237, 77, 155, 189, 10, 32, 201, 62, 108, 128, 2, 190, 96, 129, 166, 61, 22, 202, 138, 61, 70, 233, 1, 191, 165, 70, 45, 62, 251, 203, 114, 62, 86, 236, 242, 187, 251, 20, 247, 189, 148, 238, 58, 189, 171, 195, 109, 188, 93, 9, 136, 60, 109, 179, 64, 190, 38, 120, 222, 188, 15, 162, 34, 62, 216, 3, 159, 62, 173, 220, 44, 191, 154, 143, 58, 61, 50, 47, 73, 62, 249, 251, 230, 189, 21, 37, 189, 62, 184, 177, 97, 62, 130, 91, 183, 190, 150, 40, 159, 61, 235, 117, 246, 61, 80, 200, 164, 62, 207, 239, 165, 189, 45, 43, 50, 190, 87, 187, 147, 190, 130, 165, 135, 190, 167, 157, 81, 190, 233, 76, 234, 190, 134, 118, 69, 62, 4, 161, 81, 62, 146, 177, 151, 62, 185, 165, 185, 62, 148, 78, 58, 191, 42, 206, 122, 191, 68, 240, 24, 190, 97, 240, 157, 62, 177, 74, 32, 191, 97, 46, 9, 61, 122, 102, 82, 62, 140, 59, 192, 190, 152, 48, 7, 190, 54, 48, 32, 62, 144, 136, 26, 62, 89, 60, 12, 190, 174, 91, 254, 62, 99, 164, 219, 59, 32, 240, 131, 190, 60, 107, 136, 59, 13, 129, 57, 190, 219, 189, 72, 191, 89, 221, 29, 63, 228, 235, 82, 190, 101, 110, 161, 61, 112, 192, 43, 191, 159, 154, 169, 60, 139, 51, 8, 189, 178, 239, 13, 62, 38, 252, 157, 62, 98, 139, 129, 190, 206, 121, 179, 62, 164, 181, 20, 61, 121, 238, 18, 190, 7, 227, 237, 189, 12, 122, 102, 190, 119, 30, 15, 188, 234, 72, 230, 61, 129, 165, 129, 189, 84, 11, 220, 189, 27, 87, 14, 62, 250, 89, 174, 61, 139, 232, 65, 190, 100, 7, 38, 190, 46, 15, 79, 61, 65, 69, 191, 61, 202, 3, 200, 188, 28, 131, 41, 190, 182, 160, 12, 190, 7, 18, 183, 189, 207, 13, 2, 190, 31, 245, 44, 62, 170, 167, 42, 61, 16, 153, 95, 189, 12, 144, 116, 188, 82, 35, 18, 189, 59, 52, 35, 190, 184, 205, 70, 190, 79, 43, 180, 189, 31, 148, 100, 189, 220, 94, 245, 189, 91, 21, 38, 190, 172, 216, 63, 61, 104, 60, 68, 190, 189, 60, 220, 61, 94, 140, 216, 189, 193, 100, 29, 190, 213, 187, 205, 61, 150, 79, 119, 187, 207, 107, 68, 190, 94, 253, 176, 189, 92, 161, 247, 61, 204, 72, 255, 190, 200, 135, 160, 190, 214, 241, 135, 62, 63, 57, 135, 189, 3, 38, 36, 62, 180, 53, 73, 61, 16, 101, 146, 62, 254, 54, 165, 188, 20, 182, 102, 189, 188, 176, 6, 62, 118, 176, 243, 189, 190, 227, 56, 62, 158, 93, 222, 62, 246, 179, 81, 190, 171, 178, 162, 61, 18, 47, 168, 189, 7, 233, 173, 61, 88, 29, 245, 61, 222, 123, 48, 189, 15, 47, 34, 62, 123, 163, 20, 62, 52, 149, 23, 62, 177, 66, 16, 61, 239, 120, 78, 190, 100, 0, 94, 62, 28, 118, 66, 189, 183, 166, 36, 189, 98, 87, 137, 189, 10, 169, 205, 61, 173, 21, 242, 60, 160, 46, 242, 61, 128, 71, 30, 62, 207, 77, 207, 189, 198, 130, 103, 61, 11, 132, 160, 189, 18, 40, 230, 61, 232, 167, 226, 189, 216, 86, 39, 190, 70, 31, 18, 189, 61, 7, 67, 61, 207, 23, 3, 62, 13, 114, 148, 189, 206, 195, 246, 61, 49, 195, 137, 189, 238, 229, 124, 61, 114, 21, 28, 190, 73, 130, 234, 189, 43, 82, 6, 61, 121, 170, 216, 61, 221, 66, 2, 60, 43, 45, 210, 60, 19, 203, 49, 190, 222, 240, 114, 61, 204, 55, 44, 190, 130, 96, 10, 188, 59, 208, 85, 190, 13, 5, 9, 61, 79, 30, 4, 190, 173, 159, 2, 190, 64, 46, 23, 60, 68, 99, 226, 60, 8, 109, 75, 62, 144, 131, 104, 62, 54, 80, 137, 189, 108, 144, 50, 62, 98, 167, 182, 189, 187, 87, 82, 190, 100, 205, 26, 62, 94, 76, 137, 190, 113, 124, 8, 62, 91, 140, 65, 62, 109, 230, 66, 62, 144, 75, 197, 190, 185, 163, 16, 189, 101, 92, 0, 189, 82, 11, 101, 60, 239, 178, 92, 62, 17, 57, 82, 62, 130, 80, 251, 190, 193, 106, 75, 62, 25, 173, 250, 188, 48, 19, 235, 61, 245, 177, 73, 189, 76, 31, 194, 61, 173, 83, 10, 190, 57, 57, 158, 190, 159, 186, 24, 62, 109, 143, 141, 189, 228, 172, 234, 62, 163, 121, 168, 62, 110, 10, 21, 62, 0, 138, 108, 62, 92, 224, 92, 189, 40, 72, 24, 190, 57, 127, 162, 189, 138, 197, 101, 188, 37, 95, 162, 190, 69, 105, 216, 60, 98, 39, 134, 188, 190, 134, 136, 189, 247, 89, 129, 60, 232, 203, 6, 62, 206, 14, 73, 62, 45, 69, 39, 62, 150, 103, 173, 189, 10, 2, 144, 61, 104, 35, 148, 189, 190, 80, 207, 189, 194, 214, 162, 62, 39, 178, 235, 60, 157, 116, 15, 190, 218, 99, 150, 62, 19, 64, 242, 61, 119, 18, 182, 62, 1, 22, 64, 61, 126, 189, 155, 189, 187, 18, 89, 190, 102, 0, 169, 189, 110, 32, 24, 189, 245, 116, 120, 189, 138, 138, 202, 62, 102, 101, 155, 61, 12, 88, 174, 62, 10, 157, 44, 62, 236, 152, 99, 190, 117, 165, 206, 190, 223, 181, 5, 190, 75, 197, 132, 190, 198, 124, 131, 191, 87, 0, 82, 191, 106, 135, 191, 61, 194, 180, 102, 190, 137, 24, 11, 62, 118, 131, 138, 190, 162, 75, 135, 187, 221, 159, 56, 190, 92, 49, 148, 62, 181, 177, 239, 190, 193, 236, 98, 191, 203, 148, 5, 191, 67, 11, 202, 189, 180, 150, 103, 62, 76, 108, 34, 62, 54, 97, 216, 62, 182, 181, 22, 188, 95, 158, 169, 62, 39, 147, 113, 191, 131, 143, 220, 188, 190, 185, 190, 62, 111, 155, 103, 190, 52, 86, 28, 190, 192, 184, 80, 62, 0, 33, 147, 190, 65, 51, 251, 60, 203, 237, 39, 191, 143, 108, 243, 191, 172, 1, 101, 189, 2, 55, 12, 190, 79, 50, 81, 190, 204, 184, 32, 190, 140, 4, 153, 189, 236, 125, 248, 189, 197, 57, 161, 188, 178, 65, 32, 189, 23, 115, 42, 188, 234, 206, 221, 59, 4, 22, 254, 59, 105, 234, 160, 189, 145, 214, 33, 189, 239, 208, 189, 189, 84, 30, 179, 60, 208, 29, 178, 61, 210, 95, 169, 61, 160, 8, 50, 190, 73, 220, 41, 190, 202, 22, 60, 187, 82, 220, 12, 62, 72, 247, 9, 60, 180, 13, 13, 190, 34, 142, 28, 60, 36, 201, 3, 62, 34, 123, 175, 60, 42, 119, 19, 190, 11, 13, 242, 189, 30, 221, 13, 190, 255, 162, 165, 61, 172, 61, 237, 189, 205, 61, 75, 189, 190, 103, 30, 189, 64, 150, 224, 190, 253, 157, 34, 189, 146, 107, 99, 62, 7, 172, 102, 191, 249, 101, 194, 190, 190, 150, 157, 61, 194, 92, 69, 190, 239, 57, 9, 62, 122, 45, 40, 61, 80, 15, 161, 61, 60, 39, 35, 190, 219, 126, 111, 62, 114, 93, 58, 189, 26, 23, 46, 191, 215, 121, 43, 191, 92, 138, 177, 189, 207, 216, 2, 62, 11, 237, 64, 62, 56, 157, 49, 62, 35, 143, 239, 189, 232, 210, 203, 61, 81, 166, 17, 191, 55, 247, 29, 190, 148, 55, 182, 61, 10, 217, 225, 62, 87, 64, 191, 189, 50, 162, 150, 62, 99, 144, 130, 190, 146, 14, 42, 62, 131, 53, 40, 191, 48, 10, 205, 191, 23, 128, 121, 190, 211, 107, 71, 191, 220, 131, 111, 190, 16, 206, 195, 189, 246, 254, 20, 191, 116, 23, 39, 191, 253, 154, 159, 189, 96, 114, 13, 190, 208, 69, 35, 60, 79, 190, 205, 190, 52, 143, 180, 59, 194, 113, 250, 61, 50, 146, 17, 63, 170, 80, 167, 190, 28, 137, 71, 191, 93, 121, 171, 61, 138, 48, 15, 190, 97, 197, 73, 190, 163, 220, 255, 62, 218, 106, 29, 62, 242, 249, 24, 62, 42, 34, 16, 189, 238, 179, 176, 61, 14, 243, 19, 186, 114, 71, 18, 63, 108, 242, 218, 189, 81, 103, 161, 190, 98, 206, 226, 62, 114, 150, 114, 189, 165, 252, 117, 62, 87, 255, 26, 191, 64, 238, 10, 191, 173, 155, 201, 190, 111, 14, 231, 190, 174, 208, 58, 188, 213, 72, 174, 62, 105, 114, 137, 190, 27, 208, 39, 62, 174, 226, 79, 61, 14, 215, 143, 189, 195, 177, 229, 59, 84, 225, 144, 62, 30, 244, 174, 189, 44, 76, 106, 190, 240, 59, 8, 62, 174, 39, 142, 189, 146, 60, 38, 60, 107, 111, 1, 189, 219, 47, 103, 189, 161, 37, 103, 191, 132, 67, 234, 62, 121, 37, 19, 190, 150, 174, 197, 189, 18, 175, 110, 191, 219, 56, 148, 59, 237, 22, 133, 61, 174, 38, 175, 61, 85, 113, 187, 62, 85, 119, 145, 190, 251, 151, 116, 62, 154, 220, 32, 189, 197, 175, 109, 189, 70, 18, 126, 189, 159, 213, 212, 189, 137, 70, 182, 190, 211, 169, 6, 62, 202, 113, 181, 189, 240, 190, 43, 189, 9, 31, 167, 58, 183, 157, 197, 62, 88, 163, 215, 190, 247, 134, 255, 61, 30, 51, 95, 191, 47, 118, 29, 61, 46, 181, 6, 190, 178, 27, 10, 62, 202, 34, 32, 190, 52, 251, 111, 62, 47, 60, 204, 62, 125, 157, 53, 189, 26, 41, 230, 62, 85, 125, 166, 190, 74, 133, 148, 62, 82, 232, 156, 190, 43, 95, 6, 190, 155, 1, 131, 62, 22, 26, 247, 61, 148, 201, 194, 62, 30, 124, 252, 61, 150, 204, 200, 60, 99, 70, 93, 190, 82, 230, 198, 61, 191, 254, 175, 62, 52, 68, 139, 60, 63, 145, 15, 62, 9, 235, 209, 61, 230, 248, 131, 190, 141, 25, 68, 62, 30, 250, 2, 62, 208, 247, 5, 190, 189, 132, 132, 190, 202, 173, 187, 189, 30, 105, 27, 189, 33, 62, 226, 189, 81, 154, 128, 60, 95, 75, 109, 62, 7, 177, 47, 61, 149, 227, 133, 62, 217, 5, 15, 191, 40, 20, 54, 189, 203, 122, 111, 61, 179, 140, 180, 59, 13, 148, 183, 62, 136, 247, 8, 63, 164, 17, 21, 191, 177, 243, 122, 62, 21, 255, 215, 189, 236, 220, 236, 62, 118, 24, 43, 62, 134, 25, 30, 60, 0, 218, 227, 190, 22, 144, 221, 189, 198, 117, 146, 190, 194, 7, 47, 191, 206, 50, 190, 190, 42, 88, 54, 62, 171, 103, 173, 62, 188, 118, 83, 62, 235, 154, 19, 190, 246, 88, 199, 190, 107, 202, 152, 189, 151, 216, 76, 191, 76, 151, 11, 191, 39, 28, 210, 189, 28, 162, 188, 190, 123, 177, 22, 61, 249, 107, 20, 190, 61, 248, 145, 188, 216, 232, 37, 62, 215, 90, 45, 190, 180, 229, 118, 62, 158, 30, 15, 191, 197, 9, 30, 190, 195, 30, 47, 190, 17, 14, 15, 190, 158, 204, 22, 62, 241, 191, 2, 62, 37, 145, 223, 62, 72, 99, 31, 190, 149, 100, 237, 189, 120, 196, 72, 190, 161, 208, 181, 190, 252, 105, 196, 190, 78, 175, 72, 191, 42, 101, 69, 190, 187, 167, 34, 62, 243, 128, 145, 62, 26, 18, 179, 62, 232, 21, 170, 190, 158, 224, 197, 190, 233, 32, 115, 60, 122, 95, 102, 62, 182, 184, 136, 61, 99, 101, 118, 190, 145, 51, 155, 61, 95, 219, 85, 191, 241, 174, 199, 62, 201, 5, 232, 189, 72, 191, 157, 190, 131, 144, 41, 61, 7, 201, 1, 62, 3, 203, 90, 62, 111, 29, 78, 189, 194, 72, 245, 190, 179, 91, 215, 190, 117, 69, 87, 61, 93, 210, 134, 62, 139, 69, 119, 62, 6, 112, 165, 190, 138, 197, 3, 62, 199, 247, 248, 189, 237, 120, 155, 62, 108, 231, 20, 61, 246, 204, 5, 190, 89, 92, 24, 60, 221, 84, 216, 190, 166, 145, 138, 61, 96, 171, 209, 189, 114, 120, 171, 62, 129, 190, 71, 62, 197, 28, 129, 61, 38, 229, 246, 61, 182, 52, 246, 190, 165, 105, 60, 62, 224, 229, 199, 189, 36, 33, 241, 190, 23, 245, 227, 189, 235, 151, 139, 191, 94, 5, 15, 63, 17, 47, 165, 190, 252, 184, 141, 62, 207, 90, 191, 191, 217, 26, 167, 62, 253, 45, 127, 188, 36, 12, 197, 61, 155, 207, 195, 62, 139, 12, 164, 191, 32, 138, 50, 62, 114, 73, 108, 61, 140, 223, 141, 62, 157, 228, 84, 190, 212, 140, 105, 61, 23, 77, 70, 61, 244, 10, 160, 62, 38, 11, 102, 190, 166, 207, 236, 189, 252, 247, 66, 63, 249, 48, 22, 191, 7, 225, 206, 190, 210, 16, 133, 62, 131, 88, 15, 191, 156, 227, 78, 62, 20, 225, 10, 191, 157, 52, 197, 191, 161, 28, 76, 61, 208, 80, 42, 189, 161, 143, 179, 61, 76, 189, 201, 189, 39, 74, 237, 61, 118, 79, 171, 189, 146, 208, 15, 190, 238, 135, 29, 190, 240, 240, 10, 189, 240, 148, 171, 189, 129, 121, 251, 189, 99, 215, 69, 190, 218, 146, 17, 190, 232, 99, 92, 189, 124, 178, 221, 61, 22, 4, 223, 189, 17, 105, 238, 189, 93, 98, 33, 62, 162, 163, 211, 188, 81, 251, 34, 189, 120, 12, 90, 189, 199, 117, 218, 189, 23, 165, 201, 61, 182, 250, 164, 61, 222, 143, 235, 189, 164, 140, 6, 62, 215, 120, 4, 190, 147, 55, 135, 61, 146, 16, 251, 189, 154, 228, 193, 61, 123, 109, 158, 61, 32, 162, 4, 62, 234, 3, 36, 60, 165, 64, 211, 61, 50, 8, 132, 189, 142, 253, 186, 61, 27, 66, 5, 190, 232, 5, 73, 190, 206, 104, 164, 189, 249, 73, 6, 61, 245, 105, 233, 61, 39, 13, 211, 61, 184, 93, 144, 189, 68, 146, 19, 62, 50, 132, 193, 189, 51, 48, 39, 190, 21, 31, 135, 61, 73, 133, 228, 60, 59, 150, 39, 190, 244, 128, 18, 189, 19, 119, 136, 188, 79, 210, 228, 187, 176, 39, 170, 61, 32, 43, 46, 190, 194, 185, 169, 60, 83, 57, 250, 189, 174, 9, 179, 189, 229, 252, 245, 189, 169, 89, 30, 190, 36, 12, 146, 188, 28, 1, 88, 61, 72, 116, 167, 61, 26, 232, 131, 189, 23, 215, 91, 190, 19, 71, 55, 190, 236, 13, 42, 191, 24, 124, 49, 191, 32, 106, 43, 190, 8, 131, 55, 191, 141, 132, 5, 62, 136, 12, 168, 61, 127, 223, 64, 190, 132, 210, 36, 62, 54, 17, 222, 61, 178, 43, 46, 61, 141, 71, 66, 62, 59, 136, 60, 62, 105, 178, 36, 190, 210, 232, 142, 190, 39, 232, 55, 190, 38, 9, 29, 61, 238, 231, 47, 190, 224, 222, 106, 62, 10, 172, 195, 60, 48, 175, 62, 189, 25, 61, 229, 61, 163, 171, 166, 190, 55, 99, 133, 190, 10, 54, 197, 62, 192, 82, 205, 61, 188, 122, 62, 190, 105, 214, 86, 62, 154, 206, 53, 190, 161, 65, 141, 61, 25, 81, 14, 191, 136, 243, 98, 191};
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
                alignas(float) const unsigned char memory[] = {145, 58, 128, 190, 144, 226, 5, 189, 34, 191, 9, 189, 8, 62, 44, 62, 44, 188, 65, 60, 59, 82, 42, 62, 43, 58, 11, 62, 151, 134, 143, 60, 244, 4, 133, 190, 146, 38, 134, 189, 243, 209, 246, 61, 125, 43, 163, 61, 246, 230, 131, 62, 76, 163, 16, 61, 215, 152, 141, 189, 22, 243, 124, 62, 188, 57, 70, 190, 77, 110, 96, 189, 189, 32, 88, 62, 107, 111, 228, 62, 170, 236, 94, 190, 31, 128, 152, 62, 204, 48, 141, 61, 34, 160, 2, 189, 168, 223, 63, 190, 77, 157, 62, 62, 183, 154, 66, 61, 202, 88, 29, 62, 157, 112, 133, 62, 205, 84, 29, 190, 60, 170, 86, 190, 192, 60, 95, 62};
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
                alignas(float) const unsigned char memory[] = {198, 13, 41, 63, 240, 217, 41, 190, 101, 54, 59, 190, 53, 92, 23, 63, 112, 153, 21, 63, 130, 142, 206, 59, 37, 98, 28, 191, 29, 147, 246, 62, 211, 20, 158, 61, 214, 151, 207, 62, 159, 206, 1, 190, 218, 161, 64, 60, 251, 67, 184, 190, 164, 61, 41, 63, 150, 112, 6, 190, 78, 128, 119, 58, 75, 135, 244, 189, 166, 57, 129, 190, 127, 8, 9, 190, 90, 89, 142, 63, 0, 105, 207, 61, 178, 15, 66, 63, 157, 19, 28, 63, 104, 186, 187, 62, 247, 130, 117, 190, 109, 232, 192, 190, 166, 213, 255, 62, 17, 100, 209, 190, 247, 189, 160, 63, 239, 2, 220, 187, 119, 100, 18, 190, 144, 203, 196, 62, 155, 33, 47, 62, 72, 178, 7, 190, 46, 217, 69, 190, 133, 9, 230, 61, 146, 181, 75, 189, 199, 150, 159, 190, 144, 99, 232, 61, 20, 130, 212, 188, 109, 129, 34, 62, 209, 49, 130, 60, 110, 106, 145, 190, 132, 220, 249, 190, 151, 166, 177, 61, 83, 137, 174, 61, 171, 226, 206, 189, 76, 43, 190, 190, 216, 14, 7, 61, 132, 226, 87, 62, 44, 134, 106, 190, 230, 162, 48, 61, 134, 253, 177, 61, 65, 166, 127, 62, 51, 126, 254, 61, 238, 99, 179, 62, 69, 48, 234, 59, 191, 116, 58, 189, 33, 109, 142, 190, 114, 170, 82, 61, 251, 31, 177, 61, 200, 37, 178, 189, 77, 43, 160, 189, 224, 99, 36, 62};
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
                alignas(float) const unsigned char memory[] = {220, 202, 128, 190, 106, 31, 151, 190};
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
    alignas(float) const unsigned char memory[] = {14, 98, 253, 60, 184, 19, 33, 63, 217, 199, 120, 190};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 3, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

// NOTE: This code export assumes that the endianness of the target platform is the same as the endianness of the source platform
#include <rl_tools/containers.h>
namespace rl_tools::checkpoint::example::output {
    static_assert(sizeof(unsigned char) == 1);
    alignas(float) const unsigned char memory[] = {36, 184, 197, 190, 31, 160, 102, 191};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 2, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

namespace rl_tools::checkpoint::meta{
   char name[] = "experiments/2024-05-27_19-39-12/b738cd1_zoo_algorithm_environment/sac_pendulum-v1/0084/steps/000000000016000";
   char commit_hash[] = "b738cd18dcbee2b66aa05c642653771cd0e46c8b";
}