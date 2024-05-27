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
                alignas(float) const unsigned char memory[] = {104, 250, 76, 63, 179, 194, 144, 63, 162, 85, 190, 62, 94, 4, 20, 63, 243, 127, 175, 63, 216, 91, 234, 62, 178, 171, 208, 189, 64, 115, 196, 191, 224, 35, 9, 191, 52, 138, 57, 191, 146, 101, 87, 191, 45, 231, 177, 62, 219, 202, 93, 190, 8, 100, 143, 63, 82, 118, 137, 62, 147, 154, 250, 190, 29, 130, 169, 191, 245, 37, 224, 190, 240, 199, 142, 62, 159, 32, 159, 63, 189, 52, 138, 62, 137, 35, 68, 63, 221, 184, 82, 191, 139, 65, 135, 190, 246, 111, 55, 63, 59, 40, 69, 191, 110, 49, 45, 190, 252, 57, 171, 190, 159, 142, 204, 63, 44, 109, 214, 62, 90, 45, 14, 191, 224, 78, 118, 63, 243, 53, 237, 62, 192, 172, 97, 63, 112, 176, 94, 62, 137, 128, 161, 189, 40, 182, 214, 189, 51, 213, 9, 191, 218, 124, 153, 62, 241, 71, 1, 191, 72, 20, 155, 63, 22, 13, 162, 62, 207, 30, 174, 62, 5, 119, 205, 190, 28, 125, 177, 60, 7, 199, 186, 62, 120, 73, 116, 191, 121, 137, 35, 191, 63, 106, 45, 191, 63, 72, 57, 62, 158, 208, 26, 61, 207, 243, 145, 191, 227, 118, 21, 62, 106, 185, 182, 60, 177, 30, 122, 188, 109, 51, 185, 62, 23, 104, 41, 191, 195, 71, 12, 191, 100, 134, 27, 191, 69, 111, 180, 62, 83, 124, 189, 190, 56, 37, 14, 63, 121, 150, 39, 191, 232, 157, 247, 61, 6, 93, 85, 191, 40, 13, 181, 62, 110, 182, 133, 190, 76, 178, 58, 62, 99, 155, 177, 60, 129, 224, 89, 190, 63, 99, 129, 62, 48, 148, 213, 62, 31, 80, 142, 61, 29, 95, 248, 191, 63, 86, 20, 191, 95, 86, 121, 190, 6, 0, 144, 63, 28, 110, 161, 188, 111, 44, 184, 188, 7, 45, 205, 190, 42, 106, 64, 191, 36, 54, 137, 187, 228, 11, 82, 191, 200, 104, 150, 62, 49, 188, 223, 62, 48, 226, 12, 63, 191, 220, 141, 190, 244, 199, 182, 62, 207, 58, 115, 191, 125, 90, 123, 190, 227, 211, 208, 190, 5, 36, 102, 62, 83, 185, 26, 63, 76, 13, 188, 190, 19, 72, 235, 62, 215, 36, 27, 63};
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
                alignas(float) const unsigned char memory[] = {157, 231, 226, 190, 72, 72, 224, 62, 155, 86, 188, 189, 103, 7, 178, 190, 198, 88, 170, 62, 124, 33, 21, 191, 13, 92, 102, 62, 139, 189, 26, 191, 134, 102, 181, 62, 11, 47, 254, 62, 198, 173, 132, 190, 39, 242, 94, 62, 249, 139, 94, 189, 137, 199, 33, 63, 111, 89, 13, 63, 16, 201, 153, 190, 22, 86, 6, 63, 179, 254, 240, 62, 50, 56, 210, 189, 157, 49, 141, 188, 174, 226, 202, 60, 186, 20, 132, 62, 211, 169, 199, 62, 122, 254, 100, 190, 194, 244, 108, 62, 124, 83, 238, 190, 94, 76, 187, 190, 175, 215, 167, 62, 157, 15, 157, 61, 49, 200, 164, 189, 116, 153, 131, 62, 42, 64, 159, 190};
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
                alignas(float) const unsigned char memory[] = {57, 60, 158, 190, 86, 44, 13, 190, 109, 46, 135, 62, 150, 252, 173, 190, 156, 5, 113, 190, 227, 220, 49, 62, 226, 255, 249, 60, 23, 185, 75, 190, 24, 176, 12, 189, 117, 61, 175, 190, 142, 100, 28, 189, 165, 55, 109, 190, 89, 71, 245, 189, 123, 211, 175, 190, 4, 137, 94, 189, 250, 233, 71, 190, 91, 40, 21, 191, 231, 144, 13, 190, 101, 191, 43, 190, 49, 77, 113, 59, 36, 140, 47, 60, 28, 99, 2, 191, 175, 110, 118, 189, 126, 191, 139, 190, 82, 103, 164, 60, 234, 89, 177, 190, 138, 189, 58, 189, 20, 123, 240, 189, 67, 11, 188, 188, 177, 246, 68, 189, 44, 148, 95, 189, 212, 33, 168, 190, 83, 123, 223, 190, 128, 71, 174, 190, 70, 201, 243, 190, 109, 228, 86, 62, 246, 43, 162, 190, 136, 25, 222, 189, 74, 146, 123, 190, 187, 184, 109, 62, 229, 12, 130, 62, 129, 61, 136, 190, 4, 54, 153, 60, 185, 50, 123, 62, 127, 235, 226, 61, 37, 193, 167, 187, 87, 5, 231, 61, 45, 170, 104, 62, 151, 133, 151, 189, 169, 14, 112, 62, 105, 115, 230, 62, 66, 201, 55, 62, 248, 134, 46, 190, 98, 108, 24, 190, 231, 96, 200, 61, 228, 231, 41, 62, 65, 67, 149, 61, 68, 255, 19, 191, 180, 155, 117, 191, 219, 142, 44, 61, 175, 5, 133, 190, 59, 213, 149, 62, 91, 116, 160, 61, 249, 168, 33, 61, 115, 201, 0, 191, 242, 46, 197, 190, 60, 90, 72, 62, 28, 44, 204, 62, 88, 22, 46, 191, 93, 183, 40, 190, 173, 157, 130, 190, 169, 143, 9, 60, 135, 239, 154, 61, 152, 204, 1, 191, 123, 28, 152, 189, 192, 170, 24, 60, 214, 220, 155, 61, 158, 225, 10, 191, 222, 231, 177, 62, 103, 190, 155, 60, 145, 140, 229, 60, 140, 166, 141, 59, 242, 162, 68, 62, 168, 222, 233, 62, 103, 184, 239, 188, 246, 74, 109, 62, 92, 209, 113, 62, 201, 21, 236, 189, 143, 74, 110, 62, 75, 162, 20, 190, 144, 50, 155, 189, 235, 27, 164, 62, 173, 181, 0, 62, 72, 101, 144, 187, 194, 203, 46, 190, 248, 49, 13, 190, 162, 209, 85, 189, 251, 170, 127, 62, 165, 99, 169, 61, 44, 8, 209, 190, 75, 70, 204, 61, 178, 67, 132, 62, 141, 148, 88, 62, 157, 79, 19, 191, 246, 189, 109, 62, 209, 93, 137, 188, 245, 4, 72, 62, 61, 221, 254, 189, 223, 252, 2, 191, 43, 88, 40, 188, 5, 246, 119, 59, 47, 182, 140, 190, 192, 33, 22, 62, 16, 196, 186, 61, 112, 46, 140, 61, 192, 45, 19, 190, 239, 222, 9, 62, 16, 215, 27, 190, 75, 43, 75, 60, 27, 81, 1, 190, 176, 241, 217, 61, 194, 239, 115, 62, 67, 104, 174, 189, 242, 76, 6, 190, 9, 185, 51, 62, 128, 10, 26, 62, 146, 220, 129, 189, 2, 233, 196, 189, 24, 194, 210, 190, 230, 0, 32, 60, 42, 236, 5, 189, 232, 65, 17, 188, 211, 176, 53, 191, 73, 254, 76, 59, 236, 25, 36, 190, 82, 140, 32, 190, 116, 34, 144, 62, 145, 79, 199, 191, 208, 97, 93, 60, 162, 186, 158, 62, 182, 154, 226, 189, 80, 143, 90, 191, 226, 39, 54, 62, 235, 118, 201, 61, 92, 133, 126, 191, 138, 229, 38, 191, 78, 205, 100, 61, 237, 86, 122, 62, 114, 191, 154, 61, 237, 233, 206, 61, 230, 20, 50, 60, 232, 234, 186, 190, 147, 226, 184, 61, 38, 9, 81, 62, 118, 4, 172, 189, 27, 2, 206, 60, 118, 224, 167, 61, 69, 14, 130, 62, 230, 211, 93, 190, 157, 193, 99, 190, 235, 39, 142, 191, 76, 114, 99, 191, 197, 222, 93, 62, 89, 233, 37, 191, 131, 225, 42, 191, 101, 217, 17, 189, 187, 249, 125, 191, 115, 64, 233, 62, 215, 91, 92, 62, 8, 13, 210, 60, 19, 124, 191, 60, 44, 50, 41, 189, 170, 41, 148, 189, 225, 33, 147, 190, 194, 28, 103, 62, 200, 4, 144, 62, 57, 239, 188, 61, 167, 19, 28, 188, 58, 100, 176, 61, 46, 149, 23, 191, 174, 242, 222, 189, 25, 11, 102, 62, 52, 249, 207, 61, 149, 227, 7, 63, 8, 176, 144, 62, 88, 0, 179, 190, 150, 251, 156, 189, 162, 184, 191, 62, 217, 204, 219, 190, 76, 140, 237, 62, 1, 237, 188, 62, 211, 255, 25, 63, 165, 38, 12, 190, 99, 69, 212, 189, 1, 236, 175, 60, 71, 253, 34, 61, 194, 159, 39, 190, 47, 123, 32, 190, 209, 112, 158, 189, 118, 193, 20, 59, 78, 89, 3, 62, 76, 15, 149, 189, 130, 219, 210, 189, 5, 240, 2, 190, 201, 56, 4, 189, 123, 212, 8, 189, 242, 248, 116, 61, 229, 74, 22, 190, 192, 178, 179, 61, 186, 154, 65, 189, 253, 231, 133, 61, 226, 84, 190, 61, 242, 165, 207, 188, 1, 175, 244, 189, 113, 233, 182, 61, 113, 70, 13, 190, 46, 16, 37, 190, 105, 238, 117, 188, 14, 100, 184, 61, 145, 180, 44, 189, 38, 114, 33, 190, 183, 31, 143, 188, 112, 206, 36, 190, 212, 229, 209, 189, 193, 77, 203, 62, 23, 119, 166, 62, 133, 215, 51, 61, 88, 92, 178, 59, 114, 168, 9, 190, 5, 205, 118, 62, 123, 20, 198, 62, 190, 88, 16, 191, 55, 132, 195, 189, 144, 22, 86, 190, 135, 81, 93, 190, 134, 16, 191, 61, 153, 20, 70, 62, 244, 15, 20, 188, 32, 239, 8, 62, 99, 221, 8, 190, 207, 183, 223, 190, 102, 242, 93, 190, 227, 75, 210, 188, 145, 89, 13, 62, 177, 160, 99, 62, 248, 231, 150, 62, 209, 170, 85, 189, 179, 249, 65, 61, 15, 138, 179, 190, 180, 142, 136, 190, 32, 72, 21, 62, 2, 35, 132, 61, 100, 71, 134, 62, 242, 198, 250, 190, 44, 24, 71, 190, 116, 107, 168, 189, 102, 183, 210, 189, 154, 108, 2, 62, 147, 26, 210, 189, 25, 99, 174, 61, 199, 205, 181, 189, 187, 127, 31, 62, 25, 218, 189, 61, 107, 98, 191, 61, 67, 233, 225, 60, 68, 229, 59, 190, 26, 12, 26, 190, 110, 94, 75, 190, 132, 239, 60, 187, 211, 5, 21, 189, 140, 56, 5, 190, 174, 157, 23, 190, 225, 97, 129, 61, 229, 215, 76, 189, 5, 79, 228, 189, 160, 152, 102, 189, 142, 46, 177, 61, 56, 18, 46, 190, 70, 64, 232, 189, 203, 91, 17, 62, 90, 225, 39, 59, 204, 56, 80, 61, 152, 27, 1, 190, 208, 26, 41, 190, 252, 80, 5, 188, 93, 209, 130, 61, 26, 204, 139, 189, 29, 107, 140, 189, 108, 234, 12, 189, 150, 129, 129, 189, 152, 203, 9, 62, 59, 16, 68, 62, 236, 164, 180, 190, 151, 216, 88, 61, 162, 80, 16, 191, 253, 117, 0, 191, 79, 148, 242, 190, 78, 114, 212, 190, 246, 204, 192, 191, 222, 82, 31, 191, 138, 243, 159, 190, 40, 193, 30, 191, 99, 133, 241, 61, 31, 166, 32, 190, 64, 8, 40, 189, 245, 138, 183, 62, 27, 158, 61, 190, 215, 81, 215, 188, 145, 182, 71, 62, 252, 183, 199, 60, 167, 50, 76, 189, 200, 175, 192, 189, 85, 155, 215, 62, 61, 236, 152, 190, 229, 255, 9, 62, 141, 64, 38, 190, 87, 103, 15, 190, 77, 131, 168, 190, 234, 189, 26, 188, 229, 140, 158, 190, 40, 11, 20, 189, 192, 253, 110, 189, 229, 181, 227, 61, 155, 222, 42, 190, 80, 220, 227, 189, 135, 64, 124, 187, 2, 8, 22, 60, 200, 83, 223, 61, 70, 54, 155, 189, 8, 81, 202, 61, 41, 79, 5, 61, 215, 184, 104, 61, 50, 107, 214, 188, 50, 143, 181, 189, 244, 102, 206, 189, 185, 140, 213, 60, 22, 200, 150, 61, 23, 197, 41, 189, 17, 208, 228, 189, 15, 156, 34, 189, 169, 15, 156, 189, 162, 253, 27, 190, 139, 107, 19, 62, 250, 83, 206, 189, 164, 208, 148, 189, 91, 220, 170, 189, 92, 238, 135, 60, 91, 65, 148, 189, 229, 104, 176, 189, 29, 26, 178, 61, 249, 18, 67, 60, 32, 189, 41, 186, 160, 148, 229, 61, 219, 120, 195, 62, 69, 64, 137, 190, 53, 26, 161, 61, 7, 216, 175, 61, 145, 8, 103, 191, 145, 10, 15, 61, 26, 144, 62, 191, 247, 132, 244, 189, 12, 96, 36, 190, 120, 118, 80, 190, 91, 42, 59, 62, 43, 105, 212, 61, 37, 146, 62, 62, 33, 4, 22, 62, 150, 153, 220, 190, 78, 16, 188, 61, 196, 237, 102, 190, 39, 16, 126, 190, 4, 35, 153, 62, 58, 234, 171, 62, 67, 121, 40, 62, 202, 128, 61, 62, 129, 246, 139, 61, 220, 175, 210, 190, 227, 58, 12, 61, 168, 47, 96, 62, 92, 242, 90, 61, 61, 46, 100, 62, 1, 182, 8, 191, 228, 76, 73, 61, 84, 206, 0, 188, 51, 146, 25, 191, 122, 178, 150, 190, 164, 38, 161, 191, 246, 221, 238, 190, 158, 159, 30, 62, 28, 174, 173, 191, 36, 141, 179, 190, 166, 204, 63, 190, 169, 90, 27, 63, 88, 118, 136, 62, 116, 112, 208, 61, 184, 161, 181, 61, 249, 159, 217, 190, 126, 15, 119, 62, 139, 12, 199, 61, 4, 200, 54, 62, 180, 90, 93, 61, 100, 165, 78, 62, 236, 175, 47, 63, 44, 195, 246, 61, 22, 128, 159, 189, 143, 90, 148, 190, 135, 168, 119, 62, 113, 63, 154, 62, 167, 74, 75, 191, 242, 231, 85, 63, 162, 53, 77, 191, 140, 14, 136, 62, 67, 210, 153, 191, 78, 112, 213, 62, 24, 199, 162, 62, 137, 67, 133, 61, 114, 231, 28, 191, 120, 240, 122, 190, 147, 240, 199, 190, 180, 17, 156, 190, 246, 125, 40, 190, 51, 247, 106, 191, 101, 40, 251, 190, 117, 127, 2, 63, 106, 12, 195, 62, 120, 208, 13, 62, 165, 38, 176, 61, 97, 182, 134, 57, 191, 176, 87, 61, 38, 15, 52, 190, 240, 2, 27, 62, 249, 207, 10, 63, 31, 23, 70, 187, 125, 213, 144, 62, 23, 9, 225, 62, 189, 65, 66, 62, 220, 165, 49, 190, 85, 33, 121, 190, 85, 35, 233, 61, 186, 194, 249, 61, 213, 86, 167, 190, 212, 184, 208, 62, 122, 240, 17, 191, 34, 38, 250, 61, 146, 211, 136, 190, 5, 185, 205, 62, 139, 118, 195, 188, 58, 177, 161, 62, 79, 242, 38, 191, 171, 232, 120, 61, 3, 217, 144, 61, 86, 183, 45, 63, 248, 49, 176, 191, 147, 128, 134, 188, 19, 120, 129, 190, 40, 90, 36, 62, 190, 199, 200, 62, 163, 1, 184, 190, 152, 4, 132, 61, 92, 73, 214, 188, 83, 253, 206, 62, 111, 104, 133, 191, 239, 143, 204, 61, 234, 79, 16, 190, 176, 92, 170, 191, 19, 245, 29, 191, 43, 71, 10, 62, 189, 145, 135, 62, 206, 250, 71, 62, 134, 82, 94, 62, 23, 197, 30, 61, 70, 157, 161, 189, 246, 52, 42, 61, 3, 238, 107, 60, 53, 93, 230, 189, 117, 204, 164, 62, 0, 113, 70, 61, 15, 51, 233, 61, 127, 17, 45, 189, 161, 156, 128, 189, 96, 74, 163, 188, 12, 228, 170, 189, 137, 99, 190, 61, 171, 91, 210, 189, 50, 208, 133, 61, 99, 20, 174, 59, 223, 58, 180, 187, 61, 135, 46, 62, 204, 58, 41, 61, 252, 58, 3, 187, 107, 4, 167, 188, 210, 175, 30, 61, 46, 48, 182, 61, 180, 7, 132, 59, 249, 179, 173, 61, 159, 177, 38, 190, 179, 205, 248, 61, 141, 154, 245, 189, 176, 56, 22, 190, 140, 223, 253, 189, 197, 77, 215, 189, 8, 190, 28, 189, 119, 127, 0, 190, 104, 247, 177, 188, 195, 236, 217, 188, 168, 89, 151, 61, 142, 2, 155, 186, 25, 151, 113, 189, 189, 31, 54, 61, 217, 94, 37, 190, 30, 144, 88, 188, 218, 22, 21, 62, 65, 141, 23, 62, 141, 39, 50, 190, 31, 166, 18, 190, 38, 72, 228, 189, 138, 199, 83, 61, 113, 225, 198, 189, 121, 59, 59, 61, 114, 148, 28, 62, 142, 172, 176, 61, 45, 207, 10, 188, 154, 93, 235, 189, 143, 35, 130, 61, 98, 116, 190, 61, 113, 122, 176, 61, 101, 235, 68, 190, 62, 140, 156, 60, 46, 33, 45, 190, 56, 0, 228, 61, 148, 146, 19, 190, 147, 99, 160, 189, 204, 15, 193, 189, 125, 98, 2, 190, 151, 31, 32, 190, 122, 60, 247, 189, 220, 74, 252, 61, 108, 108, 10, 190, 203, 197, 80, 61, 18, 204, 9, 61, 200, 173, 46, 190, 2, 251, 10, 61, 123, 199, 44, 61, 175, 242, 102, 61, 253, 78, 8, 190, 134, 42, 43, 61, 226, 130, 45, 190, 237, 65, 141, 60, 67, 214, 214, 189, 1, 233, 208, 61, 216, 5, 76, 61, 28, 164, 90, 189, 232, 28, 51, 62, 148, 248, 39, 186, 7, 115, 38, 190, 211, 62, 36, 189, 2, 183, 144, 189, 114, 150, 188, 188, 201, 188, 0, 190, 130, 11, 19, 190, 17, 77, 217, 189, 125, 15, 7, 61, 168, 235, 47, 62, 152, 82, 146, 189, 108, 235, 10, 190, 170, 38, 10, 189, 109, 10, 0, 190, 150, 49, 181, 188, 104, 157, 34, 190, 95, 236, 24, 189, 144, 13, 146, 61, 92, 7, 53, 61, 133, 107, 186, 187, 9, 234, 32, 190, 59, 3, 96, 189, 15, 235, 93, 61, 201, 26, 191, 62, 224, 67, 142, 62, 83, 92, 2, 62, 196, 175, 175, 60, 5, 249, 138, 62, 14, 173, 208, 61, 192, 21, 185, 61, 179, 164, 190, 189, 17, 71, 68, 190, 172, 171, 71, 61, 23, 81, 78, 190, 36, 237, 247, 60, 141, 180, 44, 62, 7, 83, 116, 61, 248, 163, 33, 61, 215, 199, 45, 61, 242, 16, 90, 188, 181, 122, 188, 189, 255, 2, 133, 189, 191, 130, 44, 62, 113, 22, 15, 62, 1, 105, 210, 61, 142, 60, 141, 188, 87, 250, 39, 60, 233, 47, 14, 62, 18, 195, 99, 189, 96, 17, 73, 62, 246, 34, 12, 190, 187, 35, 104, 60, 234, 47, 167, 190, 83, 89, 55, 190, 215, 187, 80, 190, 18, 119, 202, 61, 146, 50, 38, 190, 43, 176, 25, 190, 10, 47, 218, 61, 247, 106, 15, 62, 224, 140, 239, 188, 239, 126, 251, 188, 114, 207, 18, 190, 227, 193, 19, 190, 101, 207, 6, 190, 197, 248, 231, 189, 105, 103, 30, 190, 143, 44, 9, 62, 66, 241, 176, 60, 41, 103, 159, 189, 192, 55, 57, 57, 122, 161, 15, 62, 95, 138, 143, 189, 26, 20, 140, 61, 212, 73, 34, 62, 9, 190, 147, 188, 167, 57, 242, 189, 144, 36, 30, 190, 136, 130, 52, 190, 86, 189, 89, 61, 220, 194, 119, 60, 54, 32, 65, 189, 90, 211, 9, 190, 180, 230, 222, 189, 67, 248, 23, 61, 187, 33, 194, 189, 195, 14, 32, 189, 121, 126, 144, 189, 227, 104, 4, 62, 65, 114, 10, 62, 81, 119, 51, 188, 106, 227, 153, 61, 51, 95, 169, 62, 83, 63, 89, 62, 89, 174, 36, 191, 52, 177, 177, 189, 121, 103, 46, 190, 192, 197, 100, 190, 12, 69, 194, 61, 189, 149, 63, 190, 91, 187, 201, 189, 104, 239, 150, 61, 18, 36, 240, 189, 60, 85, 198, 190, 5, 145, 215, 61, 2, 220, 54, 190, 203, 97, 29, 62, 36, 41, 208, 61, 220, 53, 226, 189, 218, 248, 6, 62, 99, 124, 185, 60, 171, 99, 157, 189, 150, 198, 59, 62, 124, 5, 89, 62, 169, 140, 223, 60, 185, 49, 131, 189, 39, 109, 115, 190, 58, 159, 127, 61, 137, 56, 145, 190, 166, 150, 8, 63, 200, 44, 208, 189, 200, 168, 11, 62, 124, 2, 45, 191, 100, 87, 163, 62, 87, 83, 80, 189, 96, 123, 181, 190, 250, 78, 208, 62, 112, 92, 185, 190, 153, 190, 151, 62, 80, 156, 79, 190, 122, 99, 0, 62, 251, 210, 190, 190, 99, 243, 135, 62, 143, 25, 141, 190, 137, 68, 196, 61, 111, 99, 143, 62, 125, 154, 200, 190, 54, 52, 132, 62, 128, 136, 122, 191, 199, 62, 140, 62, 139, 234, 173, 190, 4, 228, 99, 190, 233, 70, 32, 190, 93, 22, 76, 190, 120, 239, 131, 190, 224, 0, 166, 62, 221, 240, 11, 191, 90, 19, 250, 61, 182, 244, 12, 61, 167, 157, 127, 61, 85, 17, 210, 59, 114, 31, 219, 190, 92, 155, 16, 60, 251, 189, 205, 187, 122, 63, 104, 190, 237, 20, 166, 190, 174, 55, 157, 190, 76, 192, 3, 190, 142, 239, 107, 190, 119, 164, 196, 62, 19, 47, 223, 190, 101, 20, 143, 189, 26, 60, 245, 62, 200, 194, 223, 190, 29, 214, 82, 190, 216, 138, 68, 61, 2, 111, 113, 190, 59, 30, 116, 190, 100, 155, 210, 189, 247, 130, 1, 190, 255, 32, 253, 189, 163, 206, 249, 61, 102, 121, 218, 190, 228, 123, 35, 190, 73, 80, 97, 61, 41, 251, 98, 190, 14, 41, 44, 190, 202, 185, 75, 62, 224, 166, 121, 190, 147, 4, 139, 188, 193, 139, 55, 62, 120, 171, 33, 190, 178, 238, 93, 60, 122, 213, 18, 63, 182, 233, 155, 62, 252, 88, 162, 188, 197, 120, 70, 61, 57, 198, 54, 189, 214, 127, 43, 190, 220, 131, 38, 62, 64, 185, 133, 191, 8, 253, 83, 190, 24, 115, 7, 190, 63, 212, 177, 190, 5, 71, 22, 62, 45, 41, 212, 62, 129, 56, 174, 60, 239, 145, 120, 60, 207, 108, 157, 190, 242, 230, 105, 60, 138, 68, 28, 190, 4, 78, 205, 190, 76, 19, 85, 62, 238, 23, 132, 62, 137, 45, 114, 62, 17, 37, 180, 189, 32, 158, 103, 189, 106, 147, 10, 190, 240, 178, 145, 190, 162, 115, 18, 60, 224, 76, 213, 61, 19, 234, 158, 62, 41, 76, 74, 191, 195, 119, 145, 190, 143, 225, 190, 190, 2, 102, 172, 61, 105, 77, 124, 189, 139, 39, 30, 189, 199, 137, 14, 62, 85, 50, 158, 189, 46, 210, 29, 188, 15, 74, 39, 60, 111, 28, 52, 62, 164, 101, 169, 61, 11, 38, 61, 190, 70, 38, 5, 190, 206, 169, 44, 190, 197, 174, 59, 189, 211, 126, 41, 188, 172, 186, 38, 189, 222, 97, 29, 190, 248, 111, 167, 189, 181, 137, 45, 190, 132, 238, 42, 190, 242, 76, 224, 189, 245, 116, 207, 189, 238, 198, 59, 190, 41, 62, 156, 189, 157, 176, 93, 189, 193, 28, 48, 190, 56, 143, 205, 188, 238, 155, 101, 61, 62, 238, 229, 189, 143, 180, 241, 189, 53, 40, 8, 190, 167, 8, 11, 62, 79, 200, 97, 61, 179, 240, 23, 191, 11, 56, 238, 190, 49, 13, 237, 190, 198, 231, 21, 190, 71, 30, 156, 190, 60, 125, 80, 191, 254, 37, 251, 190, 55, 187, 133, 62, 5, 54, 164, 62, 127, 37, 74, 190, 188, 248, 10, 62, 123, 119, 48, 189, 20, 195, 199, 60, 138, 63, 222, 189, 195, 88, 128, 62, 217, 98, 215, 62, 243, 159, 19, 62, 251, 191, 95, 62, 63, 82, 183, 62, 37, 79, 25, 62, 98, 5, 29, 189, 94, 143, 254, 59, 153, 0, 133, 189, 126, 143, 128, 189, 165, 5, 155, 189, 71, 242, 202, 62, 62, 8, 55, 191, 202, 39, 217, 62, 52, 188, 246, 190, 38, 249, 178, 62, 242, 72, 36, 62, 252, 76, 133, 188, 68, 171, 201, 187, 28, 57, 26, 61, 211, 121, 155, 62, 91, 128, 16, 190, 151, 98, 13, 188, 131, 180, 101, 61, 150, 163, 117, 62, 34, 209, 236, 190, 28, 2, 90, 62, 38, 185, 77, 189, 231, 118, 128, 190, 6, 41, 200, 188, 198, 198, 248, 61, 6, 188, 203, 61, 170, 98, 44, 62, 92, 155, 140, 190, 117, 161, 100, 190, 48, 251, 137, 189, 205, 140, 114, 190, 193, 195, 1, 62, 36, 143, 83, 61, 9, 160, 112, 62, 255, 57, 26, 62, 244, 184, 133, 189, 114, 20, 128, 61, 130, 148, 162, 189, 55, 129, 251, 62, 45, 87, 179, 61, 95, 226, 124, 62, 67, 19, 144, 190, 18, 170, 168, 61, 41, 233, 104, 60, 244, 106, 41, 191, 175, 243, 248, 190, 142, 88, 78, 189, 188, 34, 20, 190, 62, 222, 87, 191, 100, 36, 102, 190, 88, 15, 249, 190, 16, 217, 170, 62, 212, 67, 88, 62, 25, 117, 243, 189, 56, 83, 3, 190, 240, 218, 11, 189, 227, 49, 219, 62, 111, 27, 21, 191, 227, 107, 30, 62, 158, 51, 200, 61, 3, 244, 128, 190, 193, 22, 197, 190, 254, 205, 136, 62, 114, 133, 206, 189, 112, 123, 157, 61, 154, 160, 183, 62, 254, 111, 56, 190, 123, 17, 254, 187, 116, 140, 23, 62, 59, 181, 147, 190, 39, 42, 130, 61, 181, 22, 163, 61, 143, 237, 111, 190, 147, 5, 135, 62, 166, 215, 43, 62, 162, 90, 206, 60, 87, 47, 113, 189, 78, 210, 96, 190, 18, 144, 17, 191, 187, 181, 187, 190, 69, 15, 4, 61, 14, 245, 153, 191, 48, 232, 21, 190, 207, 13, 77, 62, 37, 187, 8, 61, 248, 211, 98, 62, 149, 6, 165, 61, 193, 190, 155, 62, 57, 166, 13, 190, 240, 19, 245, 61, 27, 88, 23, 62, 129, 119, 72, 62, 101, 36, 238, 61, 57, 48, 117, 61, 117, 74, 34, 63, 76, 13, 253, 189, 184, 216, 52, 190, 140, 197, 221, 187, 200, 132, 221, 189, 200, 75, 83, 62, 133, 79, 203, 189, 177, 21, 224, 62, 194, 196, 179, 190, 254, 82, 212, 61, 144, 63, 224, 190, 141, 229, 150, 62, 200, 114, 23, 62, 52, 51, 111, 62, 206, 98, 16, 189, 239, 22, 160, 62, 177, 64, 199, 61, 209, 70, 58, 189, 186, 191, 34, 62, 161, 214, 173, 62, 207, 51, 24, 61, 154, 226, 21, 191, 240, 139, 55, 62, 14, 60, 45, 190, 47, 150, 55, 189, 37, 26, 40, 190, 0, 14, 63, 188, 71, 224, 107, 61, 87, 200, 236, 61, 92, 19, 17, 190, 44, 166, 163, 188, 214, 158, 60, 189, 53, 202, 0, 61, 193, 66, 140, 62, 221, 192, 83, 62, 236, 75, 144, 189, 145, 162, 150, 62, 54, 239, 191, 61, 123, 92, 240, 189, 81, 241, 45, 62, 248, 219, 238, 61, 200, 162, 55, 62, 163, 130, 244, 61, 240, 96, 211, 61, 103, 111, 205, 189, 233, 189, 100, 190, 187, 245, 2, 63, 180, 57, 160, 62, 118, 222, 138, 190, 230, 170, 232, 187, 226, 205, 142, 62, 129, 10, 0, 61, 14, 162, 155, 62, 84, 126, 14, 190, 244, 138, 126, 190, 28, 83, 136, 61, 150, 178, 157, 186, 176, 211, 168, 62, 11, 78, 159, 61, 82, 34, 29, 61, 67, 47, 175, 190, 102, 178, 72, 190, 230, 50, 92, 61, 123, 64, 193, 188, 26, 18, 192, 61, 233, 106, 45, 190, 53, 61, 34, 189, 158, 225, 157, 189, 118, 184, 72, 61, 49, 234, 2, 190, 74, 218, 132, 190, 212, 109, 37, 62, 187, 171, 148, 60, 79, 233, 116, 190, 222, 191, 23, 62, 188, 164, 49, 191, 206, 17, 253, 189, 151, 90, 51, 62, 89, 133, 94, 62, 36, 99, 83, 62, 164, 28, 10, 190, 133, 228, 7, 189, 255, 139, 167, 62, 133, 69, 4, 61, 90, 70, 60, 62, 7, 45, 128, 191, 61, 110, 236, 61, 224, 105, 141, 189, 60, 109, 198, 190, 243, 69, 83, 62, 66, 106, 244, 189, 108, 5, 148, 62, 57, 198, 78, 61, 29, 44, 20, 191, 217, 192, 127, 61, 253, 143, 16, 62, 90, 141, 122, 190, 236, 71, 69, 189, 46, 255, 75, 62, 237, 71, 111, 62, 60, 182, 1, 62, 190, 91, 236, 190, 12, 44, 17, 191, 3, 114, 231, 61, 90, 22, 147, 62, 116, 115, 211, 189, 0, 77, 137, 62, 20, 218, 5, 191, 25, 97, 216, 189, 7, 168, 238, 190};
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
                alignas(float) const unsigned char memory[] = {162, 95, 134, 188, 175, 25, 21, 62, 163, 30, 163, 62, 123, 143, 196, 62, 62, 203, 71, 189, 107, 98, 167, 60, 84, 207, 55, 61, 225, 49, 178, 188, 81, 206, 189, 61, 42, 36, 77, 189, 85, 171, 135, 189, 187, 212, 142, 62, 79, 34, 235, 61, 51, 96, 130, 61, 214, 70, 78, 61, 191, 176, 104, 189, 88, 104, 0, 190, 2, 7, 150, 189, 217, 135, 34, 190, 147, 9, 35, 190, 143, 53, 134, 62, 251, 252, 159, 190, 227, 212, 76, 61, 56, 59, 13, 186, 39, 203, 5, 62, 21, 138, 25, 62, 208, 235, 123, 62, 105, 79, 137, 189, 80, 155, 7, 189, 211, 19, 95, 62, 220, 137, 123, 190, 220, 166, 11, 61};
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
                alignas(float) const unsigned char memory[] = {228, 32, 131, 62, 97, 155, 248, 62, 59, 215, 203, 62, 242, 185, 181, 189, 81, 80, 113, 62, 82, 210, 52, 191, 19, 84, 24, 190, 113, 26, 163, 190, 131, 110, 33, 190, 100, 210, 111, 191, 179, 173, 26, 62, 10, 84, 191, 190, 166, 192, 162, 63, 207, 147, 93, 63, 185, 143, 54, 63, 21, 184, 23, 190, 0, 109, 215, 61, 114, 228, 251, 61, 90, 198, 21, 189, 61, 115, 63, 189, 20, 71, 134, 189, 45, 70, 10, 63, 195, 167, 102, 187, 78, 166, 58, 191, 181, 43, 160, 189, 195, 180, 150, 63, 3, 28, 242, 189, 15, 139, 39, 190, 121, 252, 93, 62, 46, 207, 123, 189, 139, 11, 170, 62, 189, 17, 37, 191, 177, 255, 153, 190, 3, 161, 43, 190, 94, 150, 84, 190, 213, 102, 92, 190, 65, 33, 179, 190, 139, 133, 10, 189, 163, 77, 163, 61, 205, 123, 147, 190, 130, 114, 15, 62, 101, 5, 207, 62, 249, 190, 183, 188, 130, 131, 142, 190, 44, 2, 235, 61, 47, 241, 205, 62, 230, 104, 42, 190, 30, 200, 54, 61, 184, 34, 160, 61, 94, 194, 231, 188, 231, 241, 2, 61, 206, 30, 29, 190, 194, 154, 202, 189, 104, 61, 212, 61, 207, 105, 224, 190, 176, 130, 199, 62, 121, 64, 222, 187, 1, 128, 175, 62, 237, 54, 134, 190, 255, 30, 216, 62, 224, 188, 86, 190, 127, 14, 135, 190, 91, 23, 158, 62, 225, 162, 25, 190};
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
                alignas(float) const unsigned char memory[] = {39, 93, 215, 189, 205, 60, 158, 190};
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
    alignas(float) const unsigned char memory[] = {101, 147, 179, 191, 159, 139, 2, 63, 45, 19, 60, 190};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 3, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

// NOTE: This code export assumes that the endianness of the target platform is the same as the endianness of the source platform
#include <rl_tools/containers.h>
namespace rl_tools::checkpoint::example::output {
    static_assert(sizeof(unsigned char) == 1);
    alignas(float) const unsigned char memory[] = {103, 243, 66, 64, 46, 99, 30, 191};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 2, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

namespace rl_tools::checkpoint::meta{
   char name[] = "experiments/2024-05-27_19-39-12/b738cd1_zoo_algorithm_environment/sac_pendulum-v1/0040/steps/000000000016000";
   char commit_hash[] = "b738cd18dcbee2b66aa05c642653771cd0e46c8b";
}