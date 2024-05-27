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
                alignas(float) const unsigned char memory[] = {112, 117, 109, 62, 127, 17, 183, 191, 178, 114, 164, 190, 172, 108, 246, 190, 69, 115, 57, 61, 165, 232, 25, 63, 100, 187, 35, 63, 196, 104, 214, 190, 97, 75, 134, 190, 234, 236, 162, 190, 192, 54, 244, 63, 46, 162, 183, 62, 151, 9, 123, 190, 97, 72, 128, 190, 164, 102, 218, 190, 225, 73, 80, 61, 15, 55, 26, 63, 182, 83, 100, 60, 193, 0, 50, 63, 213, 234, 96, 63, 174, 152, 215, 62, 194, 82, 156, 62, 113, 125, 194, 63, 255, 93, 215, 62, 241, 170, 139, 191, 43, 133, 85, 191, 9, 249, 232, 190, 229, 68, 47, 63, 0, 230, 152, 190, 226, 156, 81, 190, 144, 10, 10, 63, 133, 140, 177, 191, 103, 38, 149, 190, 110, 123, 187, 190, 109, 118, 92, 62, 183, 113, 189, 188, 153, 45, 127, 62, 204, 79, 198, 190, 102, 211, 13, 63, 177, 193, 235, 62, 38, 18, 134, 63, 164, 27, 125, 62, 105, 228, 194, 190, 48, 59, 230, 61, 134, 2, 87, 63, 84, 143, 158, 190, 55, 195, 135, 191, 137, 125, 111, 190, 51, 174, 172, 190, 202, 159, 98, 191, 12, 146, 230, 62, 196, 20, 210, 62, 172, 10, 136, 190, 13, 153, 55, 63, 172, 67, 150, 62, 161, 211, 144, 63, 199, 134, 106, 62, 242, 18, 12, 190, 148, 78, 124, 191, 71, 126, 186, 190, 64, 182, 19, 191, 149, 182, 193, 191, 33, 246, 153, 190, 254, 77, 163, 190, 73, 119, 65, 63, 71, 27, 203, 62, 71, 40, 72, 62, 207, 90, 128, 63, 198, 152, 112, 190, 16, 208, 234, 186, 213, 255, 70, 63, 247, 134, 205, 190, 83, 236, 69, 62, 91, 165, 90, 191, 222, 146, 225, 189, 0, 24, 39, 63, 28, 15, 159, 61, 124, 253, 70, 60, 231, 31, 100, 62, 65, 188, 160, 191, 143, 127, 103, 190, 177, 111, 174, 62, 76, 188, 224, 190, 235, 235, 50, 63, 33, 30, 152, 191, 135, 244, 122, 63, 241, 35, 152, 62, 96, 133, 137, 62, 225, 51, 248, 190, 98, 159, 177, 190, 125, 82, 170, 62, 43, 88, 85, 191, 97, 40, 91, 190, 236, 108, 171, 190, 193, 122, 13, 191, 117, 42, 220, 61};
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
                alignas(float) const unsigned char memory[] = {42, 132, 143, 190, 220, 42, 11, 191, 76, 168, 211, 190, 124, 206, 146, 190, 207, 88, 178, 62, 62, 174, 0, 63, 110, 4, 7, 191, 166, 73, 147, 62, 140, 72, 109, 63, 94, 222, 2, 191, 155, 223, 54, 62, 44, 159, 163, 62, 186, 100, 127, 190, 63, 8, 232, 189, 6, 142, 220, 188, 238, 106, 228, 62, 116, 248, 204, 190, 52, 73, 17, 61, 52, 19, 253, 61, 110, 110, 46, 190, 13, 106, 41, 63, 51, 6, 119, 189, 158, 4, 12, 63, 117, 78, 170, 62, 195, 71, 198, 188, 104, 194, 137, 190, 37, 237, 16, 62, 169, 109, 33, 189, 77, 49, 167, 62, 221, 111, 75, 190, 92, 116, 144, 62, 99, 105, 136, 62};
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
                alignas(float) const unsigned char memory[] = {132, 194, 1, 190, 49, 246, 75, 190, 174, 208, 150, 190, 32, 58, 162, 191, 223, 233, 163, 62, 48, 195, 254, 61, 66, 236, 186, 62, 31, 176, 89, 187, 117, 87, 138, 62, 142, 165, 76, 191, 237, 59, 15, 191, 115, 210, 164, 61, 57, 162, 43, 189, 63, 134, 131, 62, 146, 176, 20, 190, 163, 74, 48, 188, 205, 118, 255, 62, 160, 49, 53, 190, 209, 113, 140, 61, 131, 95, 98, 62, 142, 137, 46, 190, 153, 240, 172, 190, 188, 177, 64, 62, 80, 114, 64, 189, 249, 189, 202, 189, 157, 209, 5, 61, 102, 215, 192, 190, 236, 70, 131, 62, 211, 105, 73, 190, 147, 193, 39, 61, 137, 253, 78, 190, 16, 17, 172, 61, 123, 106, 61, 190, 199, 90, 87, 61, 198, 227, 233, 60, 121, 200, 236, 62, 148, 214, 225, 190, 251, 85, 135, 189, 156, 127, 16, 191, 223, 208, 11, 189, 219, 195, 49, 191, 51, 189, 163, 61, 51, 211, 108, 62, 79, 243, 23, 62, 120, 86, 129, 62, 15, 94, 43, 191, 246, 41, 178, 61, 0, 159, 189, 62, 105, 28, 188, 190, 109, 223, 48, 62, 255, 189, 114, 190, 128, 177, 112, 191, 206, 102, 129, 62, 103, 158, 77, 62, 19, 106, 55, 190, 179, 134, 37, 190, 187, 0, 177, 62, 73, 131, 60, 189, 202, 109, 48, 190, 45, 68, 188, 190, 220, 195, 203, 62, 7, 231, 211, 190, 224, 93, 172, 62, 151, 166, 196, 60, 120, 122, 45, 60, 150, 58, 250, 61, 82, 144, 177, 188, 37, 156, 10, 190, 119, 157, 161, 61, 194, 35, 23, 190, 215, 146, 31, 62, 144, 27, 240, 189, 246, 78, 42, 190, 11, 180, 200, 188, 198, 246, 120, 188, 99, 197, 21, 189, 190, 179, 17, 62, 146, 114, 45, 61, 122, 15, 210, 187, 174, 241, 1, 62, 251, 55, 21, 190, 97, 221, 1, 190, 177, 154, 147, 61, 189, 119, 206, 60, 21, 185, 174, 61, 149, 177, 216, 189, 63, 23, 203, 189, 69, 49, 252, 188, 221, 223, 200, 189, 192, 10, 117, 61, 80, 125, 100, 60, 7, 0, 68, 61, 185, 51, 237, 189, 15, 27, 16, 61, 146, 48, 165, 189, 7, 74, 129, 61, 181, 157, 180, 62, 227, 243, 219, 61, 207, 179, 40, 62, 163, 131, 180, 191, 216, 169, 103, 62, 233, 158, 101, 190, 176, 20, 194, 190, 68, 235, 190, 191, 79, 102, 156, 62, 0, 225, 128, 190, 79, 210, 34, 61, 126, 184, 76, 60, 186, 127, 60, 190, 13, 60, 149, 190, 134, 139, 141, 190, 21, 58, 209, 62, 88, 2, 26, 63, 144, 4, 253, 190, 170, 78, 95, 191, 117, 242, 40, 62, 249, 252, 150, 62, 166, 106, 131, 190, 179, 20, 226, 190, 163, 97, 160, 190, 80, 53, 151, 62, 193, 245, 50, 189, 155, 105, 51, 62, 198, 10, 202, 188, 200, 150, 89, 190, 187, 212, 30, 62, 120, 88, 176, 61, 172, 200, 229, 62, 191, 187, 181, 190, 162, 138, 69, 191, 56, 177, 223, 190, 77, 177, 140, 191, 105, 215, 4, 187, 142, 224, 187, 61, 137, 6, 229, 188, 77, 194, 92, 191, 114, 182, 137, 62, 73, 63, 129, 191, 223, 158, 227, 189, 246, 251, 141, 62, 9, 194, 191, 190, 208, 169, 155, 62, 124, 74, 255, 190, 108, 5, 94, 62, 34, 87, 127, 62, 170, 50, 117, 190, 245, 233, 153, 62, 178, 243, 12, 190, 228, 241, 129, 62, 91, 151, 98, 191, 217, 239, 117, 62, 12, 69, 15, 190, 57, 136, 161, 61, 230, 250, 10, 62, 192, 15, 158, 189, 95, 49, 203, 62, 66, 252, 146, 190, 229, 192, 219, 190, 243, 206, 51, 190, 9, 30, 76, 62, 36, 11, 35, 62, 82, 201, 144, 189, 231, 85, 38, 190, 228, 102, 200, 187, 19, 172, 218, 185, 99, 204, 243, 61, 13, 237, 227, 188, 84, 216, 56, 190, 30, 59, 207, 61, 166, 148, 72, 60, 194, 41, 165, 60, 6, 146, 217, 189, 60, 13, 162, 189, 4, 175, 105, 189, 72, 250, 171, 60, 135, 149, 22, 189, 107, 35, 245, 60, 158, 232, 16, 189, 88, 96, 95, 189, 253, 32, 62, 61, 192, 119, 39, 190, 155, 209, 229, 61, 10, 171, 15, 190, 17, 173, 92, 189, 247, 42, 60, 190, 12, 198, 33, 190, 59, 118, 51, 190, 239, 46, 230, 188, 204, 53, 233, 189, 90, 129, 199, 189, 179, 187, 50, 60, 125, 122, 158, 61, 48, 53, 87, 189, 182, 118, 62, 61, 13, 166, 228, 189, 142, 153, 125, 62, 53, 124, 25, 190, 2, 209, 164, 190, 91, 196, 6, 190, 218, 110, 4, 189, 144, 117, 4, 61, 209, 66, 243, 60, 23, 46, 137, 190, 60, 197, 54, 62, 101, 241, 152, 190, 89, 116, 220, 189, 232, 200, 58, 61, 53, 92, 166, 61, 53, 237, 46, 191, 123, 175, 135, 188, 177, 85, 137, 190, 170, 206, 55, 191, 52, 78, 132, 190, 207, 241, 30, 62, 125, 154, 185, 189, 208, 125, 96, 190, 183, 98, 72, 190, 24, 87, 64, 190, 200, 57, 148, 190, 229, 64, 69, 191, 252, 42, 172, 62, 134, 80, 80, 189, 136, 29, 114, 190, 126, 16, 150, 189, 36, 137, 220, 190, 94, 119, 185, 190, 177, 79, 191, 190, 222, 35, 176, 191, 80, 100, 134, 62, 165, 46, 57, 189, 84, 174, 146, 190, 230, 252, 209, 191, 23, 167, 167, 62, 221, 196, 200, 191, 150, 132, 190, 190, 57, 63, 80, 60, 116, 176, 220, 190, 70, 33, 135, 189, 132, 58, 41, 191, 113, 244, 20, 62, 119, 156, 45, 63, 52, 31, 121, 190, 246, 208, 249, 188, 79, 195, 96, 190, 250, 5, 83, 62, 102, 243, 204, 190, 212, 188, 40, 62, 201, 215, 136, 190, 250, 240, 243, 189, 109, 15, 187, 189, 41, 23, 224, 189, 159, 73, 247, 189, 29, 244, 214, 188, 150, 245, 152, 189, 52, 45, 154, 190, 18, 207, 155, 62, 95, 58, 31, 191, 79, 185, 207, 61, 55, 151, 2, 190, 137, 180, 13, 60, 222, 113, 22, 62, 254, 50, 194, 62, 179, 180, 17, 190, 215, 186, 7, 61, 187, 45, 181, 190, 12, 136, 132, 60, 138, 163, 205, 61, 236, 139, 36, 62, 31, 4, 139, 62, 88, 52, 149, 190, 60, 157, 244, 61, 73, 50, 199, 62, 192, 36, 222, 189, 4, 238, 87, 62, 206, 28, 166, 189, 132, 228, 4, 191, 172, 143, 60, 62, 221, 64, 4, 190, 72, 104, 0, 62, 127, 163, 114, 61, 155, 233, 101, 189, 253, 160, 2, 62, 96, 135, 180, 189, 40, 253, 121, 190, 170, 177, 251, 61, 0, 159, 98, 190, 119, 182, 120, 61, 93, 148, 0, 62, 90, 0, 152, 190, 228, 200, 67, 62, 74, 185, 142, 61, 12, 80, 8, 63, 189, 85, 131, 61, 91, 215, 156, 61, 179, 14, 53, 191, 148, 94, 94, 190, 177, 147, 180, 189, 48, 235, 57, 62, 88, 198, 132, 62, 211, 146, 177, 62, 4, 125, 21, 62, 97, 140, 100, 191, 160, 93, 18, 62, 172, 194, 84, 62, 175, 177, 43, 190, 6, 20, 87, 62, 184, 169, 4, 191, 15, 89, 230, 189, 239, 104, 162, 60, 112, 15, 216, 189, 42, 231, 41, 60, 217, 243, 53, 61, 202, 14, 196, 62, 96, 142, 184, 61, 116, 150, 127, 61, 246, 51, 204, 190, 251, 61, 168, 62, 223, 122, 75, 61, 102, 253, 167, 62, 8, 6, 146, 62, 45, 113, 167, 190, 125, 184, 199, 189, 6, 64, 159, 191, 98, 172, 29, 190, 74, 77, 203, 62, 168, 196, 178, 61, 76, 104, 181, 62, 133, 58, 235, 61, 245, 220, 169, 62, 7, 19, 130, 191, 174, 34, 97, 191, 24, 232, 241, 188, 212, 152, 101, 189, 3, 150, 169, 61, 165, 36, 10, 190, 45, 190, 55, 191, 162, 35, 122, 62, 114, 247, 217, 188, 34, 223, 116, 62, 161, 159, 155, 190, 148, 158, 133, 190, 114, 72, 117, 190, 245, 242, 137, 61, 110, 94, 203, 62, 39, 21, 28, 191, 57, 198, 54, 63, 107, 206, 99, 191, 35, 216, 135, 62, 219, 12, 7, 191, 173, 94, 23, 191, 41, 85, 164, 191, 65, 70, 43, 61, 70, 138, 243, 190, 215, 229, 128, 62, 82, 196, 98, 188, 174, 187, 71, 61, 168, 12, 21, 62, 65, 255, 226, 61, 1, 204, 230, 190, 239, 55, 9, 62, 30, 141, 13, 190, 214, 41, 129, 62, 190, 133, 242, 60, 160, 143, 169, 62, 218, 187, 150, 62, 165, 38, 50, 190, 225, 149, 235, 61, 29, 130, 151, 61, 189, 4, 188, 190, 159, 113, 94, 62, 252, 154, 57, 61, 172, 100, 179, 60, 156, 69, 111, 62, 112, 226, 228, 61, 211, 183, 7, 62, 83, 214, 115, 189, 178, 234, 104, 62, 169, 27, 24, 61, 245, 54, 2, 62, 251, 101, 25, 190, 95, 159, 204, 185, 207, 71, 50, 190, 69, 143, 198, 61, 131, 25, 153, 189, 170, 84, 184, 62, 108, 128, 160, 62, 235, 143, 23, 62, 176, 161, 12, 189, 40, 204, 253, 189, 190, 166, 180, 190, 194, 228, 93, 62, 226, 95, 27, 62, 70, 59, 196, 189, 29, 138, 5, 63, 23, 19, 29, 60, 155, 101, 121, 190, 183, 14, 156, 62, 153, 156, 216, 61, 65, 124, 9, 189, 208, 52, 204, 190, 105, 49, 53, 62, 243, 225, 75, 62, 76, 31, 121, 189, 111, 196, 130, 189, 46, 109, 108, 189, 18, 210, 252, 61, 110, 67, 230, 188, 185, 238, 86, 62, 142, 56, 66, 62, 71, 227, 88, 190, 124, 251, 249, 61, 34, 147, 10, 62, 36, 22, 132, 61, 154, 121, 178, 62, 140, 226, 194, 189, 23, 30, 13, 189, 216, 117, 25, 191, 130, 213, 94, 62, 192, 207, 22, 189, 237, 11, 154, 62, 255, 220, 19, 190, 170, 184, 49, 62, 56, 204, 47, 190, 164, 184, 46, 62, 96, 224, 24, 191, 182, 81, 76, 62, 126, 251, 130, 62, 113, 214, 3, 61, 170, 183, 85, 62, 129, 5, 72, 190, 76, 241, 97, 62, 78, 122, 143, 62, 28, 122, 145, 190, 4, 231, 86, 62, 251, 15, 45, 59, 4, 38, 52, 191, 28, 179, 244, 61, 86, 117, 229, 188, 244, 238, 69, 190, 179, 16, 75, 61, 38, 131, 247, 59, 210, 6, 206, 62, 106, 86, 224, 61, 221, 61, 153, 189, 108, 110, 147, 62, 203, 159, 182, 190, 160, 90, 194, 62, 82, 218, 43, 62, 91, 44, 163, 190, 95, 202, 45, 190, 187, 13, 239, 61, 34, 38, 10, 62, 194, 20, 42, 62, 237, 114, 60, 62, 16, 18, 185, 190, 45, 123, 26, 191, 145, 129, 37, 59, 153, 134, 3, 63, 24, 242, 181, 61, 207, 246, 134, 62, 226, 122, 42, 191, 199, 41, 83, 61, 60, 83, 181, 190, 182, 21, 73, 189, 101, 221, 155, 61, 111, 152, 75, 191, 236, 231, 82, 190, 161, 218, 149, 61, 121, 81, 153, 189, 57, 181, 173, 190, 114, 178, 159, 62, 130, 92, 33, 62, 126, 206, 143, 190, 112, 191, 214, 61, 223, 38, 75, 62, 197, 6, 32, 190, 37, 232, 136, 62, 51, 16, 227, 189, 208, 98, 23, 189, 134, 219, 63, 190, 133, 186, 134, 189, 123, 56, 153, 190, 39, 41, 219, 60, 94, 189, 106, 190, 130, 98, 207, 61, 60, 111, 158, 189, 83, 84, 232, 62, 111, 233, 143, 189, 17, 56, 232, 188, 132, 45, 10, 62, 155, 121, 193, 189, 155, 25, 222, 189, 95, 232, 17, 62, 134, 209, 49, 62, 238, 17, 0, 62, 236, 252, 70, 191, 142, 131, 38, 62, 71, 91, 108, 62, 219, 100, 130, 62, 0, 50, 216, 189, 70, 62, 48, 191, 38, 245, 219, 190, 101, 11, 65, 62, 131, 95, 63, 62, 255, 135, 96, 189, 3, 247, 121, 62, 73, 63, 248, 189, 64, 227, 162, 62, 38, 155, 245, 190, 161, 77, 199, 62, 196, 6, 49, 190, 128, 159, 191, 190, 225, 201, 169, 191, 226, 12, 163, 190, 32, 93, 66, 190, 173, 164, 31, 191, 254, 1, 71, 190, 138, 190, 38, 62, 30, 66, 185, 62, 198, 159, 199, 62, 62, 4, 51, 62, 35, 48, 163, 190, 221, 144, 208, 190, 151, 251, 41, 62, 244, 211, 194, 61, 163, 36, 220, 62, 168, 66, 172, 190, 220, 36, 182, 190, 108, 60, 204, 189, 199, 95, 219, 62, 96, 2, 193, 62, 84, 130, 11, 190, 80, 221, 148, 190, 27, 42, 6, 190, 239, 95, 195, 62, 5, 222, 28, 62, 245, 166, 228, 189, 228, 32, 233, 61, 118, 159, 189, 190, 249, 198, 101, 62, 149, 51, 8, 191, 60, 43, 31, 190, 169, 42, 221, 60, 58, 15, 20, 62, 17, 137, 96, 62, 231, 103, 235, 190, 7, 93, 9, 62, 72, 10, 116, 59, 133, 153, 154, 62, 140, 90, 147, 189, 207, 45, 174, 62, 138, 240, 90, 62, 116, 214, 114, 189, 222, 198, 44, 191, 41, 240, 183, 189, 236, 229, 43, 62, 186, 120, 135, 62, 109, 18, 127, 62, 117, 202, 172, 189, 107, 115, 26, 61, 162, 159, 228, 190, 177, 215, 192, 189, 3, 177, 179, 62, 28, 12, 91, 62, 144, 169, 62, 189, 213, 34, 131, 190, 42, 185, 180, 61, 125, 152, 42, 62, 128, 10, 162, 62, 184, 38, 95, 62, 145, 132, 110, 62, 122, 164, 137, 189, 116, 80, 90, 190, 75, 196, 142, 61, 145, 167, 163, 62, 232, 87, 33, 62, 66, 237, 228, 190, 24, 154, 210, 62, 66, 122, 96, 62, 24, 216, 63, 62, 208, 138, 180, 190, 42, 61, 116, 62, 219, 134, 2, 191, 44, 230, 23, 189, 145, 99, 62, 191, 197, 13, 148, 62, 104, 42, 177, 62, 70, 235, 250, 189, 30, 11, 207, 62, 123, 253, 23, 191, 20, 170, 194, 61, 163, 168, 4, 62, 9, 119, 175, 190, 44, 138, 73, 62, 208, 224, 18, 189, 63, 233, 141, 191, 77, 196, 1, 61, 252, 251, 116, 62, 195, 148, 137, 189, 167, 125, 164, 189, 248, 31, 67, 62, 15, 14, 236, 61, 190, 132, 227, 61, 248, 12, 142, 190, 236, 133, 205, 62, 129, 123, 75, 61, 161, 216, 190, 62, 150, 221, 240, 60, 60, 104, 204, 190, 50, 4, 4, 63, 234, 66, 150, 62, 49, 102, 227, 62, 158, 125, 118, 61, 39, 121, 187, 62, 119, 190, 57, 191, 143, 29, 177, 188, 64, 54, 7, 191, 133, 136, 200, 61, 145, 244, 163, 61, 99, 133, 239, 61, 153, 171, 167, 62, 185, 27, 64, 191, 151, 153, 21, 62, 41, 8, 66, 62, 65, 69, 1, 191, 51, 86, 10, 63, 0, 89, 169, 190, 75, 205, 253, 190, 65, 176, 9, 190, 201, 39, 241, 61, 49, 202, 229, 187, 192, 98, 90, 62, 132, 122, 102, 58, 178, 203, 120, 62, 196, 106, 247, 61, 146, 149, 157, 190, 164, 176, 200, 62, 169, 176, 70, 62, 206, 134, 99, 62, 252, 98, 61, 190, 251, 39, 253, 191, 146, 18, 6, 62, 210, 218, 4, 62, 114, 92, 122, 190, 209, 136, 245, 189, 141, 122, 180, 62, 143, 164, 61, 62, 254, 10, 203, 61, 47, 223, 232, 62, 9, 170, 51, 62, 99, 64, 60, 190, 243, 233, 40, 62, 9, 212, 57, 62, 185, 77, 26, 190, 241, 110, 11, 62, 197, 77, 190, 190, 72, 81, 89, 61, 26, 223, 183, 62, 220, 41, 150, 62, 184, 250, 92, 190, 182, 87, 49, 191, 72, 30, 10, 62, 114, 41, 12, 62, 245, 50, 114, 62, 138, 182, 163, 189, 201, 37, 115, 60, 210, 181, 163, 190, 253, 150, 111, 61, 215, 186, 178, 190, 194, 246, 223, 190, 48, 99, 175, 61, 71, 208, 223, 186, 193, 234, 52, 190, 219, 115, 181, 61, 149, 145, 140, 189, 29, 97, 125, 61, 119, 233, 237, 189, 8, 117, 231, 189, 5, 111, 50, 190, 79, 89, 40, 190, 212, 32, 214, 189, 88, 243, 188, 189, 102, 198, 93, 61, 109, 89, 49, 189, 24, 225, 203, 189, 1, 118, 4, 190, 4, 200, 190, 189, 33, 231, 246, 189, 80, 7, 143, 187, 226, 54, 51, 190, 104, 242, 210, 61, 152, 210, 22, 62, 61, 251, 237, 189, 192, 223, 199, 60, 68, 194, 89, 189, 31, 40, 193, 189, 158, 26, 45, 190, 177, 184, 124, 188, 252, 124, 187, 189, 153, 18, 12, 61, 187, 240, 248, 189, 195, 217, 221, 189, 131, 68, 49, 62, 233, 175, 241, 61, 213, 95, 144, 61, 203, 228, 128, 190, 112, 241, 3, 62, 58, 107, 188, 190, 250, 182, 247, 61, 32, 90, 241, 61, 189, 181, 207, 62, 60, 76, 39, 61, 7, 178, 61, 61, 26, 254, 6, 191, 203, 225, 51, 190, 62, 188, 107, 189, 178, 71, 199, 61, 207, 48, 237, 61, 133, 197, 54, 189, 201, 71, 2, 190, 71, 159, 44, 62, 100, 210, 186, 61, 141, 182, 136, 62, 196, 160, 64, 62, 43, 244, 55, 61, 109, 94, 161, 190, 2, 40, 193, 61, 23, 124, 113, 188, 79, 2, 203, 62, 76, 21, 215, 62, 216, 57, 23, 190, 100, 135, 47, 62, 60, 130, 162, 190, 230, 104, 11, 62, 12, 134, 158, 62, 14, 18, 97, 62, 14, 177, 19, 191, 244, 237, 31, 188, 129, 158, 245, 189, 77, 12, 3, 62, 5, 113, 177, 61, 89, 163, 101, 62, 140, 120, 98, 62, 179, 198, 147, 60, 32, 208, 68, 62, 30, 134, 68, 191, 234, 44, 17, 191, 232, 1, 120, 62, 150, 228, 132, 62, 124, 9, 145, 60, 192, 31, 148, 188, 74, 150, 49, 191, 144, 83, 165, 61, 101, 77, 217, 61, 67, 202, 66, 62, 139, 230, 212, 189, 34, 221, 51, 191, 2, 69, 211, 189, 231, 81, 136, 62, 50, 160, 202, 62, 142, 174, 170, 190, 219, 70, 194, 190, 59, 87, 51, 191, 54, 40, 22, 62, 73, 244, 135, 61, 67, 5, 29, 190, 44, 239, 18, 190, 6, 87, 225, 189, 140, 79, 185, 190, 205, 62, 9, 62, 0, 151, 27, 62, 47, 85, 234, 61, 194, 167, 190, 61, 107, 251, 122, 62, 228, 17, 216, 189, 195, 203, 10, 62, 76, 86, 10, 190, 75, 138, 79, 62, 135, 42, 87, 61, 226, 173, 150, 62, 252, 154, 26, 189, 162, 169, 140, 59, 137, 243, 63, 62, 175, 238, 144, 62, 246, 110, 30, 188, 164, 83, 167, 61, 133, 126, 120, 189, 58, 206, 53, 61, 109, 62, 78, 188, 183, 115, 9, 189, 149, 175, 153, 189, 207, 30, 237, 61, 111, 148, 207, 61, 82, 51, 9, 62, 4, 95, 31, 62, 15, 70, 154, 59, 78, 126, 112, 62, 236, 142, 88, 189, 43, 253, 31, 62, 8, 98, 189, 189, 166, 96, 80, 189, 113, 229, 147, 188, 37, 61, 67, 189, 170, 53, 138, 190, 29, 8, 17, 62, 37, 97, 236, 190, 126, 12, 8, 187, 235, 193, 208, 188, 55, 126, 236, 62, 33, 22, 157, 189, 61, 17, 4, 191, 132, 3, 143, 190, 11, 149, 72, 62, 242, 61, 140, 190, 158, 150, 80, 62, 35, 90, 115, 190, 38, 213, 234, 62, 227, 28, 44, 187, 181, 228, 136, 189, 12, 245, 230, 190, 243, 165, 246, 188, 158, 4, 130, 61, 157, 167, 153, 190, 57, 178, 161, 190, 91, 60, 34, 60, 100, 96, 107, 190, 101, 169, 98, 191, 183, 29, 139, 61, 75, 183, 100, 188, 201, 22, 140, 60, 4, 176, 106, 190, 242, 168, 219, 61, 120, 242, 187, 191, 55, 215, 13, 62, 153, 119, 244, 189, 254, 213, 232, 188, 129, 28, 245, 189, 187, 224, 75, 62, 73, 50, 203, 61, 116, 126, 72, 62, 76, 199, 160, 62, 50, 211, 75, 190, 204, 254, 236, 189, 96, 106, 244, 61, 67, 3, 120, 62, 63, 122, 103, 188, 96, 172, 156, 189, 82, 143, 48, 191, 138, 125, 17, 62, 8, 129, 124, 62, 101, 73, 66, 62, 66, 113, 173, 190, 115, 143, 46, 191, 91, 241, 137, 188, 2, 107, 215, 62, 86, 74, 5, 62, 114, 251, 15, 62, 228, 241, 50, 190, 238, 178, 52, 190, 76, 132, 228, 61, 100, 203, 188, 189, 124, 105, 253, 190, 144, 157, 52, 190, 254, 42, 3, 190, 226, 233, 186, 61, 190, 49, 49, 190, 43, 250, 123, 187, 196, 185, 131, 61, 217, 33, 169, 61, 207, 59, 133, 189, 161, 15, 1, 62, 116, 218, 183, 61, 166, 100, 83, 61, 99, 80, 12, 62, 161, 198, 121, 189, 240, 18, 159, 189, 178, 212, 215, 61, 36, 121, 229, 188, 11, 235, 220, 188, 212, 245, 48, 190, 39, 106, 33, 190, 83, 202, 3, 190, 226, 74, 241, 189, 214, 72, 180, 188, 75, 124, 123, 189, 222, 241, 186, 61, 100, 170, 27, 190, 93, 63, 52, 190, 194, 224, 220, 61, 34, 134, 236, 188, 152, 131, 39, 61, 33, 229, 156, 60, 229, 225, 49, 190, 200, 72, 16, 60, 136, 45, 16, 190, 12, 20, 196, 59, 237, 116, 175, 191, 202, 161, 238, 190, 80, 86, 99, 190, 56, 181, 71, 191, 205, 237, 201, 61, 201, 221, 39, 61, 32, 59, 58, 62, 13, 237, 127, 61, 5, 51, 6, 60, 61, 92, 206, 190, 73, 38, 156, 190, 16, 203, 150, 62, 79, 61, 156, 62, 85, 99, 22, 62, 168, 12, 64, 190, 121, 182, 152, 189, 177, 133, 232, 189, 142, 102, 37, 62, 145, 48, 103, 62, 118, 162, 162, 189, 10, 217, 166, 190, 124, 177, 40, 191, 177, 71, 158, 62, 194, 89, 2, 62, 54, 23, 64, 189, 71, 20, 227, 62, 222, 73, 162, 190, 195, 51, 243, 61, 76, 232, 119, 61, 34, 84, 73, 190, 40, 104, 106, 190, 58, 252, 41, 62, 171, 213, 92, 62, 42, 92, 155, 190, 82, 229, 2, 189, 96, 12, 143, 62, 52, 55, 171, 62, 196, 20, 85, 187, 172, 214, 177, 190, 5, 139, 113, 190, 27, 78, 183, 62, 62, 201, 36, 63, 83, 62, 56, 190, 48, 133, 103, 62, 83, 30, 0, 191, 124, 70, 171, 190, 53, 232, 85, 190, 234, 2, 169, 61, 35, 233, 238, 189, 221, 43, 93, 191, 103, 231, 165, 190, 58, 172, 182, 62, 186, 136, 118, 60, 85, 236, 36, 62, 37, 128, 132, 62, 179, 55, 138, 188, 108, 231, 196, 190, 222, 215, 78, 191, 190, 156, 74, 61, 18, 18, 49, 191, 242, 202, 0, 63, 7, 1, 27, 62, 105, 250, 45, 191, 221, 191, 223, 188, 243, 2, 151, 190, 189, 94, 204, 61, 47, 116, 34, 190, 155, 167, 197, 189, 220, 54, 162, 190, 156, 245, 231, 189, 114, 210, 225, 190, 79, 224, 93, 190, 190, 136, 87, 190, 38, 103, 12, 62, 222, 100, 227, 61, 15, 58, 56, 62, 99, 247, 249, 61, 118, 23, 87, 191, 29, 120, 136, 61, 218, 191, 232, 61, 141, 219, 238, 61, 240, 217, 167, 61, 154, 37, 27, 191, 2, 171, 202, 189, 19, 35, 46, 62, 154, 108, 36, 190, 209, 253, 248, 60, 75, 162, 136, 190, 207, 85, 247, 187, 52, 0, 125, 189, 4, 231, 245, 61, 77, 134, 169, 189, 202, 24, 116, 186, 201, 124, 8, 191, 130, 186, 232, 188, 33, 73, 36, 62, 133, 111, 232, 189, 135, 112, 148, 189, 126, 124, 45, 62, 141, 72, 150, 189, 77, 133, 231, 189, 102, 158, 56, 60, 118, 201, 244, 189, 138, 82, 18, 61, 232, 250, 136, 61, 71, 143, 42, 190, 162, 97, 205, 60, 89, 211, 138, 189, 87, 37, 4, 190, 221, 201, 3, 62, 243, 98, 139, 60, 122, 242, 94, 189, 213, 49, 46, 190, 214, 77, 234, 61, 232, 80, 26, 190, 231, 191, 93, 61, 142, 32, 23, 190, 184, 26, 138, 61, 12, 183, 7, 190, 173, 183, 237, 189, 183, 231, 140, 61, 242, 47, 4, 190, 72, 117, 31, 62, 14, 167, 31, 190, 6, 3, 22, 62, 180, 70, 50, 60, 106, 176, 187, 61, 127, 33, 29, 190};
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
                alignas(float) const unsigned char memory[] = {194, 246, 122, 61, 176, 42, 240, 61, 40, 189, 134, 189, 247, 253, 210, 61, 163, 224, 138, 62, 90, 241, 144, 189, 119, 42, 26, 62, 201, 61, 121, 62, 223, 253, 189, 62, 246, 106, 111, 62, 82, 26, 76, 190, 83, 24, 175, 62, 179, 87, 201, 190, 42, 79, 152, 61, 250, 229, 254, 188, 242, 34, 167, 190, 213, 126, 128, 61, 167, 14, 226, 61, 87, 133, 30, 62, 234, 91, 130, 62, 234, 107, 166, 61, 105, 230, 173, 189, 141, 58, 242, 61, 94, 193, 21, 62, 75, 196, 218, 59, 58, 39, 194, 189, 89, 186, 66, 62, 91, 146, 27, 190, 215, 9, 149, 62, 146, 203, 113, 190, 131, 216, 62, 62, 49, 70, 203, 189};
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
                alignas(float) const unsigned char memory[] = {36, 221, 111, 191, 213, 172, 118, 63, 229, 185, 56, 189, 214, 229, 67, 191, 117, 184, 145, 191, 56, 157, 37, 61, 206, 255, 102, 63, 4, 208, 174, 191, 48, 140, 29, 62, 5, 150, 231, 62, 37, 122, 222, 63, 134, 106, 36, 62, 177, 206, 3, 190, 209, 174, 157, 62, 177, 21, 228, 62, 166, 148, 72, 191, 231, 5, 120, 191, 66, 87, 57, 190, 171, 189, 158, 62, 226, 173, 34, 63, 32, 80, 159, 190, 155, 214, 28, 62, 55, 7, 13, 190, 229, 44, 161, 190, 128, 148, 250, 61, 114, 57, 149, 190, 58, 130, 205, 190, 218, 31, 21, 62, 30, 167, 153, 190, 97, 31, 42, 63, 12, 182, 5, 63, 84, 97, 17, 189, 212, 236, 79, 62, 172, 129, 180, 62, 186, 239, 159, 189, 32, 188, 17, 61, 6, 144, 73, 189, 1, 174, 45, 61, 80, 120, 122, 190, 123, 17, 136, 62, 36, 70, 79, 190, 53, 51, 4, 62, 138, 234, 192, 62, 10, 177, 133, 190, 148, 152, 112, 62, 243, 249, 13, 190, 123, 16, 52, 190, 195, 223, 168, 62, 37, 19, 71, 190, 35, 106, 22, 190, 163, 63, 208, 61, 240, 63, 48, 61, 77, 50, 148, 190, 162, 190, 147, 189, 36, 176, 150, 190, 74, 218, 127, 62, 166, 223, 225, 189, 11, 233, 160, 189, 10, 207, 32, 190, 108, 163, 228, 61, 88, 145, 2, 191, 132, 42, 94, 187, 4, 76, 189, 61, 239, 128, 175, 61};
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
                alignas(float) const unsigned char memory[] = {235, 6, 119, 62, 193, 207, 204, 190};
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
    alignas(float) const unsigned char memory[] = {48, 240, 200, 191, 85, 108, 3, 62, 86, 128, 64, 63};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 3, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

// NOTE: This code export assumes that the endianness of the target platform is the same as the endianness of the source platform
#include <rl_tools/containers.h>
namespace rl_tools::checkpoint::example::output {
    static_assert(sizeof(unsigned char) == 1);
    alignas(float) const unsigned char memory[] = {17, 112, 158, 64, 222, 197, 80, 191};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 2, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

namespace rl_tools::checkpoint::meta{
   char name[] = "experiments/2024-05-27_19-39-12/b738cd1_zoo_algorithm_environment/sac_pendulum-v1/0063/steps/000000000016000";
   char commit_hash[] = "b738cd18dcbee2b66aa05c642653771cd0e46c8b";
}